#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int ac;

    ac = 1;;
    if(argc >= 2)
    {
        while(argc > ac)
        {
            i = -1;
            while(argv[ac][++i])
                std::cout << static_cast<char>(std::toupper(argv[ac][i]));
            ac++;
        }
    }
   else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}

