#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "Invaliid argument";
    else
    {
        ScalarConverter::convert(argv[1]);
    }
}