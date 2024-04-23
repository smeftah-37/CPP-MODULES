#include "phonebook.hpp"
int main()
{
    PhoneBook ph;
    std::string line;

    while (1)
    {
        std::cout << "enter a choice :" << std::endl;
		std::cout << "_ADD " << std::endl << "_SEARCH " << std::endl << "_EXIT " << std::endl;
        std::getline(std::cin, line);
        if (std::cin.eof())
            exit(1);
        if(line == "ADD" || line == "SEARCH" || line == "EXIT")
        {
            if (line == "ADD")
                ph.Add();
            else if(line == "SEARCH")
                ph.Search();
            else
                return (0);
            
        }
        else
            std::cout << "sorry you should enter a valid option, try again" << std::endl;
    }
}