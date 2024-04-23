#include "file.hpp"

int main(int argc, char **argv)
{
    std::string file;
    std::string s1;
    std::string s2;
    std::string line;
    if (argc != 4)
        std::cout << "Invalid arguments " << std::endl;
    else
    {
        // if (!argv[2][0])
        //     exit(1);
        File f(argv[1], argv[2], argv[3]);
        f.ReadReplace();
    }
}