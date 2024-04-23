#include "harl.hpp"

int main(int argc, char **argv)
{
    std::string av;

    if (argc != 2)
        exit(1);
    av = argv[1];
    if (av == "ERROR" || av == "WARNING" || av == "INFO" || av == "DEBUG")
    {
        harl h;
        switch(av[0])
        {
            case 'D' : h.complain("DEBUG");
                break;
            case 'I' : h.complain("INFO");
                break;
            case 'W' : h.complain("WARNING");
                break;
            case 'E' : h.complain("ERROR");
                break;
            
        }
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}