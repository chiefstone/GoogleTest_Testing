/**
 * @file main.cpp
 * @author Jens Nelke
 * @date 12.02.2016
 * @brief Main function of the test suite
 *
 */

#include <iostream>
#include "testcases.hpp"
#include "testcasesFixture.hpp"
#include "gtest/gtest.h"

/**
 * Main routine of the testframework.
 */
int main(int argc, char** argv)
{
    int error = 0;
    std::cout << ("\nTesting with GTest\n\n") << std::endl;
    //Initialize gmock
    ::testing::InitGoogleMock(&argc, argv);
    //Initialize gtest
    ::testing::InitGoogleTest(&argc, argv);
    //All testcases will be run
    error = RUN_ALL_TESTS();
    if (0 != error)
    {
        std::cout << ("Running tests failed!") << std::endl;
    }
    return error;
}
