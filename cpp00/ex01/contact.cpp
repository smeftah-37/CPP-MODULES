#include "contact.hpp"

std::string Contact::get_firstname() const
{
    return(FirstName);
}
std::string Contact::get_lastname() const
{
    return(LastName);
}
std::string Contact::get_nickname() const
{
    return(NickName);
}
std::string Contact::get_phonenum() const
{
    return(PhoneNumber);
}
std::string Contact::get_dsecret() const
{
    return(DarkestSecret);
}

void Contact::Check_error(std::string str, std::string& value, int s)
{
    int k;

    while(1)
    {
        k = 0;
        std::cout << "enter the " << str;
        std::getline(std::cin, value);
        if (std::cin.eof())
            exit(1);
        if (s == 1)
            while(value[k] && std::isalpha(value[k]) && k++>= 0);
        else if (s == 0)
            while(value[k] && (value[0] == '+' || std::isdigit(value[k])) && k++>= 0);
        else
        {
            if(value[k])
                k = value.length();
        }
        if (k == static_cast<int>(value.length()) && k != 0)
            break;
        else
            std::cout << "Invalid format , try again" << std::endl;
    }
}
void Contact::Remplir()
    {
        Check_error("firstname :", FirstName, 1);
        Check_error("lastname :",LastName, 1);
        Check_error("nickname :",NickName, 2);
        Check_error("Phonenumber :",PhoneNumber, 0);
        Check_error("DarkSecret :",DarkestSecret, 2);
}