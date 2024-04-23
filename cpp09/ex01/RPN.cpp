#include "RPN.hpp"

RPN::RPN(std::string format)
{
    _format = format;
}
RPN::RPN()
{

}
RPN::RPN(const RPN &r)
{
    *this = r;
}
RPN &RPN::operator=(const RPN &r)
{
    if(this != &r)
        _format = r._format;
    return (*this);
}
std::stack<std::string> RPN::split(std::string s, char c)
{
    std::stringstream ss(s);
    std::stack<std::string> spl;
    std::string line;
    while(std::getline(ss,line,c))
    {
        spl.push(line);
    }
    return spl;
}

int RPN::doCalc(int a, int b, char c)
{
    if(c == '+')
        return a+b;
    if(c == '-')
        return a-b;
    if(c == '*')
        return a*b;
    if(c == '/')
    {
        if(b == 0)
            throw  std::runtime_error("You can't devide by 0");
        return a/b;
    }
    return (0);
}
int RPN::calculate()
{

    for(size_t i = 0; i <_format.length(); i++)
    {
        if(!isdigit(_format[i]) && _format[i] != ' ' && _format[i] != '+' && _format[i] != '-'&& _format[i] != '*' && _format[i] != '/')
        {
            throw std::runtime_error("Error: Invalid format");
        }
    }
    std::stringstream ss(_format);
    std::stack<int> spl;
    std::string line;
    int n = 0;
    int c = 0;
    while(std::getline(ss,line,' '))
    {
        if(line.empty())
            continue;
        if(line.length() != 1)
            throw std::runtime_error("Invalid number");
        else if(isdigit(line[0]))
        {
            spl.push(atoi(line.c_str()));
            n++;
        }
        else
        {
            c++;
            if(spl.size() > 1)
            {
                int v = spl.top();
                spl.pop();
                int v1 =spl.top();
                spl.pop();
                spl.push(doCalc(v1,v,line[0]));
            }
        }
    }
    if(spl.size() != 1 || n != c + 1)
        throw std::runtime_error("Invalide Polish notation");
    return spl.top();
}


RPN::~RPN()
{

}