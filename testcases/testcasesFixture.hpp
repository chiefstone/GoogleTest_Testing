/**
 * @file testcasesFixtures.hpp
 * @author Jens Nelke
 * @date 12.02.2016
 * @brief Testcase definitions with fixture
 * The Testcases are located in a hpp file due to gtest not finding the tests.
 * This is a sample on how to use fixtures.
 */

#ifndef TESTCASES_TESTCASES_FIXTURE_HPP_
#define TESTCASES_TESTCASES_FIXTURE_HPP_

#include <stdarg.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "join.h"
#include "split.h"
#include "stringReturnMock.h"

/**
 * This class is a gtest testfixture. It includes Setup and Teardown functions.
 */
class splitTestFixture1: public ::testing::Test
{
public:
    /**
     * Constructor
     */
    splitTestFixture1()
    {
        // initialization code here
    }

    /**
     * Setup method
     */
    void SetUp()
    {
        // code here will execute just before the test ensues
    }

    /**
     * Teardown method
     */
    void TearDown()
    {
        // code here will be called just after the test completes
        // ok to through exceptions from here if need be
    }

    /**
     * Destructor
     */
    ~splitTestFixture1()
    {
        // cleanup any pending stuff, but no exceptions allowed
    }

    // put in any custom data members that you need
};

/**
 * Testcase with fixture
 * @param test_fixture Fixture to use for the testcase which also name for suite
 * @param test_name Name of the testcase
 */
TEST_F (splitTestFixture1, splitTest1)
{
    std::string longString = "This is a very very long string for testing!";
    std::vector<std::string> returnString = split(longString, "i");
    ASSERT_STREQ("Th", returnString[0].c_str());
}
#endif /* TESTCASES_TESTCASES_FIXTURE_HPP_ */
