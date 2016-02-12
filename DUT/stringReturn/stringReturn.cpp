/**
 * @file stringReturn.cpp
 * @author Jens Nelke
 * @date 11.02.2016
 * @brief Sample class for testing
 */

#include "stringReturn.h"
#include <cctype>
#include <algorithm>

/**
 * Default constructor
 */
StringReturn::StringReturn()
{
    m_string = "";
}

/**
 * Constructor initializing the string member.
 */
StringReturn::StringReturn(std::string string) : m_string(string)
{

}

/**
 * Destructor
 */
StringReturn::~StringReturn()
{
    m_string = "";
}

/**
 * Method for setting the string.
 * @param string The string to set.
 */
void StringReturn::setString(std::string string)
{
    m_string = string;
}

/**
 * Return string as char.
 */
const char* StringReturn::getStringAsChar()
{
    return m_string.c_str();
}

/**
 * Return string with all characters being upper.
 */
std::string StringReturn::getStringAllUpper()
{
    std::string result;
    std::transform(m_string.begin(),m_string.end(), result.begin(), toupper);
    return result;
}

/**
 * Return string with all characters being lower.
 */
std::string StringReturn::getStringAllLower()
{
    std::string result;
    std::transform(m_string.begin(),m_string.end(), result.begin(), tolower);
    return result;
}


