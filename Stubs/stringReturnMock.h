/**
 * @file stringReturnMock.h
 * @author Jens Nelke
 * @date 11.02.2016
 * @brief Sample mock class for class stringReturn
 */

#ifndef STUBS_STRINGRETURNMOCK_H_
#define STUBS_STRINGRETURNMOCK_H_

#include "stringReturn.h"
#include "gmock/gmock.h"

/**
 * definition of mocking class
 */
class StringReturnMock : public StringReturn
{
public:
    StringReturnMock();
    virtual ~StringReturnMock();
    MOCK_METHOD0(getStringAsChar, const char*() );
};

#endif /* STUBS_STRINGRETURNMOCK_H_ */
