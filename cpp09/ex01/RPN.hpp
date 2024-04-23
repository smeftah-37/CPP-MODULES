#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cmath>
#include <stack>
#include <fstream>
#include <exception>
#include <string>
#include <sstream>
class RPN
{
    std::string _format;


    public:
        RPN(std::string format);
        RPN();
        RPN(const RPN &r);
        RPN &operator=(const RPN &r);
        int calculate();
        int doCalc(int a, int b, char c);

        ~RPN();
        std::stack<std::string> split(std::string s, char c);
};

#endif