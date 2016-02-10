/**
 * Main function of the test suite
 * Author: Jens Nelke
 * Company: Brunel Communications
 * Date: 25.01.2016
 */

#include <iostream>
#include "testcases.h"
#include "gtest/gtest.h"

//class AdditionTest : public ::testing::Test {
//     protected:
//      virtual void SetUp() {
//      }
//      virtual void TearDown() {
//        // Code here will be called immediately after each test
//
//        // (right before the destructor).
//
//      }
//    };
//
//    TEST_F(AdditionTest,twoValues){
//        const int x = 4;
//        const int y = 5;
////        Addition addition;
//        EXPECT_EQ(9,9);
//        EXPECT_EQ(5,5);
//    }

int main(int argc, char** argv)
{
    int error = 0;
    std::cout << ("\nTesting with GTest\n\n") << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    error = ::testing::UnitTest::GetInstance()->Run();
    if (0 != error)
    {
        std::cout << ("Running tests failed!") << std::endl;
    }
    return error;
}
