/**
 * @file testcases.hpp
 * @author Jens Nelke
 * @date 12.02.2016
 * @brief Testcase definitions with mocking
 * The Testcases are located in a hpp file due to gtest not finding the tests.
 * This file shows the usage of gmock
 */

#ifndef TESTCASES_TESTCASES_HPP_
#define TESTCASES_TESTCASES_HPP_

#include <stdarg.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "join.h"
#include "split.h"
#include "stringReturnMock.h"
#include "stringReturn.h"

/**
 * Testcase using gmock for mocking
 * @param test_case_name Name of the suite
 * @param test_name Name ofthe testcase
 */
 TEST(SuiteSplitTest, split_long_string)
    {
        //Create mock object
        StringReturnMock mockString;
        //Tell mock to return value
        EXPECT_CALL(mockString, getStringAsChar()).WillOnce(::testing::Return("Dieter"));
        std::vector<std::string> returnString = split(mockString.getStringAsChar(), "i");
        std::string expectedString = "D";
        ASSERT_STREQ("D", returnString[0].c_str());
    }

#endif /* TESTCASES_TESTCASES_HPP_ */
