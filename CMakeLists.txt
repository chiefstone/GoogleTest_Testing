################################################################
# Main cmake files
# Author: Jens Nelke
# Company: Brunel Communications
# Date: 25.01.2016
################################################################

cmake_minimum_required(VERSION 2.8.7)
project(UnitTesting C CXX)

set(CMAKE_COLOR_MAKEFILE ON)
#enable_testing()

# Added for External Projects
include(ExternalProject)
include(wrap_functions.cmake)
include(dut_sources.cmake)

################################################################
# Compiler and linker
################################################################
#Flag can be used for defines
add_definitions(-DMODULE_TEST)

#Compiler flags for C and C++
SET(CMAKE_C_FLAGS "-g -Wall -W -pedantic --coverage")
SET(CMAKE_CXX_FLAGS "-g -Wall -W -pedantic --coverage"
    CACHE STRING "Flags used by the C++ compiler during coverage builds."
    FORCE )
#Wrap string for linker command is build
STRING(REPLACE ";" ",-wrap," WRAP_FUNCTIONS_RAW "${WRAP_FUNCTIONS_RAW}")
SET(WRAP_FUNCTIONS "-Wl,-wrap,${WRAP_FUNCTIONS_RAW}")

#Linker flags
SET(CMAKE_EXE_LINKER_FLAGS "-O0 -fprofile-arcs -ftest-coverage ${WRAP_FUNCTIONS}")

################################################################
# Set Module Path
################################################################
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

################################################################
# Codecoverage with LCOV and GCOVR
################################################################
include(CodeCoverage)
include(CorrectWindowsPaths)

################################################################
# Install command
################################################################
if(CYGWIN)
set(MAKE_INSTALL_STRING make install)
else(CYGWIN)
set(MAKE_INSTALL_STRING sudo make install)
endif(CYGWIN)

################################################################
# Create target for codecoverage
################################################################
SETUP_TARGET_FOR_COVERAGE(coverage UnitTesting coverage)
SETUP_TARGET_FOR_COVERAGE_COBERTURA(cobertura UnitTesting cobertura)

#Check if gtest is already installed
find_library(GTEST_PATH NAMES libgtest.a PATHS /usr/local/lib)
find_path(GTEST_INCLUDE_PATH NAMES gtest.h PATHS /usr/local/include/gtest)
#Set the paths for gtest
message(STATUS GTEST_PATH=${GTEST_PATH})
message(STATUS GTEST_INCLUDE_PATH=${GTEST_INCLUDE_PATH})
if(GTEST_PATH AND GTEST_INCLUDE_PATH)
get_filename_component(GTEST_LIBRARY_PATH ${GTEST_PATH} PATH)
else(GTEST_PATH AND GTEST_INCLUDE_PATH)
################################################################
# External: build and install googletest
################################################################
if(NOT IS_DIRECTORY ${PROJECT_SOURCE_DIR}/googletest/build)
  file(MAKE_DIRECTORY ${PROJECT_SOURCE_DIR}/googletest/build)
endif(NOT IS_DIRECTORY ${PROJECT_SOURCE_DIR}/googletest/build)
ExternalProject_Add(googletest
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/googletest
    CONFIGURE_COMMAND cd ${PROJECT_SOURCE_DIR}/googletest/build && cmake -Dgtest_build_tests=OFF -Dgmock_build_tests=OFF ..
    BUILD_COMMAND cd ${PROJECT_SOURCE_DIR}/googletest/build && make 
    INSTALL_COMMAND cd ${PROJECT_SOURCE_DIR}/googletest/build && ${MAKE_INSTALL_STRING}
)

set(GTEST_INCLUDE_PATH /usr/local/include/gtest)
set(GTEST_INCLUDE_PATH ${GTEST_INCLUDE_PATH} CACHE FILEPATH "" FORCE)
set(GMOCK_INCLUDE_PATH /usr/local/include/gmock)
set(GTEST_LIBRARY_PATH /usr/local/lib)
endif(GTEST_PATH AND GTEST_INCLUDE_PATH)

#Check if LCOV is installed
find_program(LCOV_PATH NAMES lcov PATHS /usr/bin /usr/local/bin)

if(LCOV_PATH)

else(LCOV_PATH)
################################################################
# External: build and install lcov
################################################################
ExternalProject_Add(lcov
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lcov
    CONFIGURE_COMMAND cd .
    BUILD_COMMAND cd .
    INSTALL_COMMAND cd ${CMAKE_CURRENT_SOURCE_DIR}/lcov/ && ${MAKE_INSTALL_STRING}
)
endif(LCOV_PATH)

################################################################
# Include paths, libraries and subdirectories
################################################################
if(GTEST_INCLUDE_PATH)
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${GTEST_INCLUDE_PATH} ${GMOCK_INCLUDE_PATH} ${DUT_INCLUDES} ${CMAKE_CURRENT_SOURCE_DIR}/testcases ${CMAKE_SOURCE_DIR}/Stubs)
else(GTEST_INCLUDE_PATH)
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${GTEST_INCLUDE_PATH} ${GMOCK_INCLUDE_PATH} ${DUT_INCLUDES} ${CMAKE_CURRENT_SOURCE_DIR}/testcases ${CMAKE_SOURCE_DIR}/Stubs)
endif(GTEST_INCLUDE_PATH)
LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${GTEST_LIBRARY_PATH})

add_subdirectory(googletest)
add_subdirectory(Stubs)
add_subdirectory(DUT)
add_subdirectory(testcases)

################################################################
# Custom test target
################################################################
ADD_CUSTOM_TARGET(test
# Cleanup 
COMMAND rm -rf ${CMAKE_CURRENT_SOURCE_DIR}/build/testAll.xml

# Run tests
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/build/UnitTesting --gtest_output="xml:./testAll.xml"
DEPENDS UnitTesting
)

find_package(Threads)

add_executable(UnitTesting main.cpp)
add_dependencies(UnitTesting googletest lcov Stubs DUT testcases )

if(CYGWIN)
target_link_libraries(UnitTesting gtest Stubs DUT libgtest.a libgtest_main.a libgmock.a gcov  ${CMAKE_THREAD_LIBS_INIT})
else(CYGWIN)
target_link_libraries(UnitTesting gtest Stubs DUT libgtest.a libgtest_main.a libgmock.a gcov  ${CMAKE_THREAD_LIBS_INIT})
endif(CYGWIN)
