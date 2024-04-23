#include <iostream>

int main()
{
    std::string string="HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string; 
    std::cout << "address of the string ::" <<  &string << std::endl;
    std::cout << "address of the pointer ::" << &stringPTR << std::endl;
    std::cout << "address of the refrence ::" << &stringREF << std::endl;
    std::cout << "value of the string ::" <<  string << std::endl;
    std::cout << "value of the pointer ::" << *stringPTR << std::endl;
    std::cout << "value of the refrence ::" << stringREF << std::endl;



}