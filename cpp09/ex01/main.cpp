#include "RPN.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        try
        {
            RPN r(argv[1]);
            std::cout << r.calculate() << std::endl;}
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }
    else
        std::cerr << "Invalid arguments" << std::endl;
        
        
}