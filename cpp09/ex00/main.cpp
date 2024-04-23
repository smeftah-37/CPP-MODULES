#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if(argc==2)
    {
        try
        {
             Bitcoin b(argv[1]);
            b.parsing();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
       
    }
    else
        std::cerr << "could not open the file" << std::endl;
}