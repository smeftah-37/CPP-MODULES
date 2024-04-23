#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include <iostream>

#include <string>
#include <sstream>
#include <iomanip>
#include "contact.hpp"


class   PhoneBook
{
    Contact contact[8];
    int     i;
    unsigned long     nbr;   
public:
    PhoneBook();
    ~PhoneBook();
    void    Add();
    void    Search();
    void ft_subs(std::string s);
};
#endif