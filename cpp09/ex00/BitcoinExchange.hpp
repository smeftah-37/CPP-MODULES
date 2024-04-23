#ifndef BITCOINEXCANGE_HPP
#define BITCOINEXCANGE_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <sstream>
#include <exception>
#include <cmath>
#include <limits>

class Bitcoin
{
    private:
        const std::string _nameFile;
        std::vector<std::pair<std::string,float> > myContainer;
        int checkDate(std::string dat, int check);
        float checkValue(std::string value, int check);
        std::vector<std::string> split(std::string s, char c);
        void    findAndPrint();
        bool validDate(int year, int month, int day);
        bool validYear(int year);
    public:
        void parsing();
        Bitcoin();
        Bitcoin(const std::string &name);
        ~Bitcoin();
        Bitcoin(const Bitcoin &b);
        Bitcoin &operator=(const Bitcoin &b);
     

};

#endif