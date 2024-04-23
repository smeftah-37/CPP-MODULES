#include  "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if(argc > 2)
    {   try
        {   
            fordJohnsonSort sortMI(argv, argc);
            sortMI.sortForD();
            sortMI.sortForL();

        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

    }
    else
        std::cerr << "Error" << std::endl;
}


