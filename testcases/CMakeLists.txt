################################################################
# CMakefile for the testcase lib
# Author: Jens Nelke
# Company: Brunel Communications
# Date: 25.01.2016
################################################################

LINK_DIRECTORIES(${CMAKE_SOURCE_DIR}/DUT ${CMAKE_SOURCE_DIR}/Stubs)

add_definitions(-DMODULE_TEST)
