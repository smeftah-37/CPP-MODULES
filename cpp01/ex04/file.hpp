#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class   File
{
private:
    std::string fi;
    std::string s1;
    std::string s2;
    std::string line;
    std::size_t pos;
public:
    std::string getValues1() const;
    std::string getValues2() const;
    std::string getValuefile() const;
    void    ReadReplace();
    File(std::string f, std::string s, std::string ss);
    ~File();
};
#endif