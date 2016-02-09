/**
 * Main function of the test suite
 * Author: Jens Nelke
 * Company: Brunel Communications
 * Date: 25.01.2016
 */

#include <iostream>
//#include "sds.h"
#include "testcases.h"

int main(int argc, const char* argv[])
{
    int error = 0;
    std::cout << ("\nTesting with GTest\n\n") << std::endl;

    if (0 == argc)
    {
        if (argv != NULL)
        {

        }
    }
    error = runTestCases();
    if (0 != error)
    {
        std::cout << ("Running tests failed!") << std::endl;
    }
    return error;
}
