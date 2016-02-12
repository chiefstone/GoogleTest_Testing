/**
 * @file stringReturn.h
 * @author Jens Nelke
 * @date 11.02.2016
 * @brief Sample class for testing
 */

#ifndef DUT_STRINGRETURN_STRINGRETURN_H_
#define DUT_STRINGRETURN_STRINGRETURN_H_

#include <string>

/**
 * Definition of sample code.
 */
class StringReturn
{
public:
    StringReturn();
    StringReturn(std::string string);
    virtual ~StringReturn();
    virtual void setString(std::string string);
    virtual const char* getStringAsChar();
    virtual std::string getStringAllUpper();
    virtual std::string getStringAllLower();
private:
    std::string m_string;
};

#endif /* DUT_STRINGRETURN_STRINGRETURN_H_ */
