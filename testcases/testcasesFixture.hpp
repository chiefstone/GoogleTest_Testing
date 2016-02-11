/**
 * Testcase definitions
 * Author: Jens Nelke
 * Company: Brunel Communications
 * Date: 25.01.2016
 */

#ifndef TESTCASES_TESTCASES_HPP_
#define TESTCASES_TESTCASES_HPP_

#include <stdarg.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "join.h"
#include "split.h"


 TEST(SuiteSplitTest, split_long_string)
    {
        std::string longString = "Dies ist ein langer String";
        std::vector<std::string> returnString = split(longString, "i");
        std::string expectedString = "D";
        ASSERT_STREQ("D", returnString[0].c_str());
    }


//GTEST_TEST(SuiteTest, Test)
//    {
//        //useWrapped = true;
////        std::string testString("Dies ist ein langer String!");
////        std::vector<std::string> result;
////        result = split(testString, "i");
//        ASSERT_TRUE(1);
//        //useWrapped = false;
//    }
//
//GTEST_TEST(Suite2Test, Test2)
//    {
//        //useWrapped = true;
////        std::string testString("Dies ist ein langer String!");
////        std::vector<std::string> result;
////        result = split(testString, "i");
//        ASSERT_TRUE(1);
//        //useWrapped = false;
//    }



#endif /* TESTCASES_TESTCASES_HPP_ */
