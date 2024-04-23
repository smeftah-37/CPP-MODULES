#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
class ScalarConverter
{
private:
    static int CharConvert(std::string s);
    static int intConvert(std::string s);
    static int FloatConvert(std::string s);
    static int DoubleConvert(std::string s);
    static std::string toLower(std::string s);
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter &s);
    ScalarConverter &operator=(const ScalarConverter &s);

public:
    static void convert(std::string literal);
};

#endif