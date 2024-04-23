#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    i = 0;
    nbr = 0;
}
PhoneBook::~PhoneBook()
{

}

void PhoneBook::Add()
{
    contact[i].Remplir();
    if(nbr <8)
        nbr++;
    i++;
    if (i == 8)
        i = 0;
}
void PhoneBook::ft_subs(std::string s)
{
    std::string ret;
    if (s.length() >= 10)
        std::cout <<s.substr(0,9) + '.' << "|";
    else
        std::cout << std::setw(10) << s << "|";
}
void  PhoneBook::Search()
{
    unsigned long j;
    std::string index;

    j = 0;
    ft_subs("index");
    ft_subs("firstName");
    ft_subs("lastName");
    ft_subs("NickName");
    std::cout << std::endl;
    while (j < nbr)
    {
        std::cout << std::setw(10) << j << "|";
        ft_subs(contact[j].get_firstname());
        ft_subs(contact[j].get_lastname());
        ft_subs(contact[j].get_nickname());
        std::cout << std::endl;
        j++;
    }
    std::cout << "enter the index of the contact : ";
    std::getline(std::cin, index);
    if(std::cin.eof())
        exit(1);
    j = 0;
    while(index[j] && std::isdigit(index[j]) && j++ >= 0);
    if(j == index.length()  &&  j > 0)
    {
        j = stoi(index);
        if(j < nbr)
        { 
        std::cout << "firstname         --> " << contact[j].get_firstname() << std::endl;
        std::cout << "lastname          --> " << contact[j].get_lastname() << std::endl;
        std::cout << "nicktname         --> " << contact[j].get_nickname() << std::endl;
        std::cout << "phonenumber       --> " << contact[j].get_phonenum() << std::endl;
        std::cout << "Darkest secret    --> " << contact[j].get_dsecret() << std::endl;
        }
        else
        std::cout << "invalid index" << std::endl;
    }  
    else
        std::cout << "invalid index" << std::endl;
   


}
