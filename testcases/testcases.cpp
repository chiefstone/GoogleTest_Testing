/**
 * Test case implementation
 * Author: Jens Nelke
 * Company: Brunel Communications
 * Date: 25.01.2016
 */

#include "join.h"
#include "split.h"

#include <string>
#include <vector>

#include "testcases.h"
//#include "sds.h"

/*With this flag triggers the usage of wrapped code.*/
bool useWrapped;

using ::testing::Return;


/**
 * First step using wrapped and mocked memcmp.
 *
 */


/**
 * Sample testcase
 */
TEST(Suite1, Test2)
{
//    sds string = sdsempty();
//    assert_int_equal(0, sdslen(string));
}

/**
 * Sample testcase
 */
TEST(Suite2, Test1)
{
//    sds string = sdsempty();
//    sds string2 = sdscat(string,"Klaus");
//    assert_int_equal(5, sdslen(string2));
}

/**
 * function is called by main it runs the tests.
 * @return error code for the tests run.
 */
//int runTestCases()
//{
    /**
     * Configures cmocka to write xml testreport as needed by Jenkins CI Server
     */
//    const char* fileName = "./cmocka_out.xml";
//    remove(fileName);
//    setenv("CMOCKA_XML_FILE", fileName, 1);
//    cmocka_set_message_output(CM_OUTPUT_XML);
//
//    const struct CMUnitTest testcases1[] =
//    {
//    cmocka_unit_test(simpleTest),
//    cmocka_unit_test(simpleTest2),
//    cmocka_unit_test(simpleTest3) };
//
//    return cmocka_run_group_tests_name("Sample Testcases", testcases1, NULL,
//            NULL);
//}

