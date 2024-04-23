#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <iostream>

#include <string>
#include <sstream>
#include <iomanip>

class   Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    void Remplir();
    void Check_error(std::string str, std::string& value, int s);

    std::string get_firstname() const;
    std::string get_lastname() const;
    std::string get_nickname() const;
    std::string get_phonenum() const;
    std::string get_dsecret() const;
};
#endif
