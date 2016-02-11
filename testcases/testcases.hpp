/**
 * Testcase definitions
 * Author: Jens Nelke
 * Company: Brunel Communications
 * Date: 25.01.2016
 */

#ifndef TESTCASES_TESTCASES_H_
#define TESTCASES_TESTCASES_H_

#include <stdarg.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "join.h"
#include "split.h"


GTEST_TEST(SuiteTest, Test)
    {
        //useWrapped = true;
//        std::string testString("Dies ist ein langer String!");
//        std::vector<std::string> result;
//        result = split(testString, "i");
        ASSERT_TRUE(1);
        //useWrapped = false;
    }

GTEST_TEST(Suite2Test, Test2)
    {
        //useWrapped = true;
//        std::string testString("Dies ist ein langer String!");
//        std::vector<std::string> result;
//        result = split(testString, "i");
        ASSERT_TRUE(1);
        //useWrapped = false;
    }



#endif /* TESTCASES_TESTCASES_H_ */
