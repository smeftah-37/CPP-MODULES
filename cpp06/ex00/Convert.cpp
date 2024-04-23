#include "Convert.hpp"
#include <cctype>

void ScalarConverter::convert(std::string s)
{
    if (s.length() == 0)
    {
        std::cerr << "empty string " << std::endl;
        return;
    }
    if (CharConvert(s))
        return;
    else if (intConvert(s))
        return;
    else if (FloatConvert(s))
        return;
    else
        DoubleConvert(s);
}
int ScalarConverter::CharConvert(std::string s)
{
    if (s.length() == 1 && !std::isdigit(s[0]))
    {
        if (std::isprint(static_cast<unsigned char>(s[0])))
        {
            std::cout << "char: " << static_cast<unsigned char>(s[0]) << std ::endl;
            std::cout << "int: " << static_cast<int>(s[0]) << std ::endl;
            std::cout << std::fixed << std::setprecision(1);
            std::cout << "float: " << static_cast<float>(s[0]) << "f" << std ::endl;
            std::cout << "double: " << static_cast<double>(s[0]) << std ::endl;
            std::cout << std::resetiosflags(std::ios::fixed);
        }
        else
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: Non displayable" << std::endl;
            std::cout << "float: Non displayable" << std::endl;
            std::cout << "double: Non displayable" << std::endl;
        }

        return (1);
    }
    else if (s.length() == 1)
    {
        return (0);
    }
    return (0);
}
int ScalarConverter::intConvert(std::string s)
{

    unsigned long i;
    i = 0;
    while (i < s.length() && std::isdigit(s[i]))
        i++;
    if (i == s.length() && (atoi(s.c_str()) > 0 || (s.length() == 1 && s[0] == '0')))
    {
        int i;
        i = atoi(s.c_str());
        if (i <= 255 && i >= 0)
        {
            if (std::isprint(static_cast<unsigned char>(i)))
                std::cout << "char: " << static_cast<unsigned char>(i) << std::endl;
            else
                std::cout << "char: "
                          << "Non displayable" << std::endl;
        }
        else
            std::cout << "char: "
                      << "Impossible" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(i) << "f" << std ::endl;
        std::cout << "double: " << static_cast<double>(i) << std ::endl;
        std::cout << std::resetiosflags(std::ios::fixed);
        return (1);
    }
    return (0);
}
int ScalarConverter::FloatConvert(std::string s)
{
    char *endptr;
    if (s.length() > 0 && s[s.length() - 1] == 'f')
        s[s.length() - 1] = 0;
    else
        return (0);
    double result = strtod(s.c_str(), &endptr);
    if (*endptr != '\0')
    {
    }
    else
    {
        if (static_cast<int>(result) <= 255 && static_cast<int>(result) >= 0)
        {
            if (std::isprint(static_cast<char>(result)))
                std::cout << "char: " << static_cast<char>(result) << std::endl;
            else
                std::cout << "char: "
                          << "Non displayable" << std::endl;
        }
        else
            std::cout << "char: "
                      << "Impossible" << std::endl;
        int unsigned long i = s.find(".");
        if (i != std::string::npos)
        {
            s = s.substr(0, s.length() - i);
        }
        if ((toLower(s).find("nan") != std::string::npos) || (toLower(s).find("inf") != std::string::npos) || (s[0] == '-' && s > "-2147483648" && s.length() >= 12) || (s[0] == '+' && s > "+2147483647" && s.length() >= 12) || (s > "2147483647" && s.length() >= 11))
            std::cout << "int: "
                      << "Impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(result) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(result) << "f" << std ::endl;
        std::cout << "double: " << static_cast<double>(result) << std ::endl;
        std::cout << std::resetiosflags(std::ios::fixed);
        return (1);
    }
    return (0);
}
int ScalarConverter::DoubleConvert(std::string s)
{
    char *endptr;
    double result = strtod(s.c_str(), &endptr);
    if (*endptr != '\0')
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "flaot: Impossible" << std::endl;
        std::cout << "double: Impossible" << std::endl;
    }
    else
    {
        if (static_cast<int>(result) <= 255 && static_cast<int>(result) >= 0)
        {
            if (std::isprint(static_cast<char>(result)))
                std::cout << "char: " << static_cast<char>(result) << std::endl;
            else
                std::cout << "char: "
                          << "Non displayable" << std::endl;
        }
        else
            std::cout << "char: "
                      << "Impossible" << std::endl;
        int unsigned long i = s.find(".");
        if (i != std::string::npos)
        {
            s = s.substr(0, i);
        }
        if ((toLower(s).find("nan") != std::string::npos) || (toLower(s).find("inf") != std::string::npos) || (s[0] == '-' && s > "-2147483648" && s.length() >= 12) || (s[0] == '+' && s > "+2147483647" && s.length() >= 12) || (s > "2147483647" && s.length() >= 11))
            std::cout << "int: "
                      << "Impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(result) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(result) << "f" << std ::endl;
        std::cout << "double: " << static_cast<double>(result) << std ::endl;
        std::cout << std::resetiosflags(std::ios::fixed);
        return (1);
    }
    return (0);
}
std::string ScalarConverter::toLower(std::string s)
{
    unsigned long i;
    std::string result;
    i = 0;
    while (i < s.length())
        result += std::tolower(s[i++]);
    return (result);
}

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::~ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter &s)
{
    *this = s;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s)
{
    (void)s;
    return (*this);
}