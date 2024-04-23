#include "file.hpp"

File::File(std::string f, std::string s, std::string ss)
{
    fi = f;
    s1 = s;
    s2 = ss;
}

File::~File()
{

}

std::string File::getValues1() const
{
    return s1;
}
std::string File::getValues2() const
{
    return s2;
}
std::string File::getValuefile() const
{
    return fi;
}
void    File::ReadReplace()
{
    size_t    i;

    i = 0;
    std::ifstream file(fi);
    std::ofstream file1(fi + ".replace");
    if(file.is_open() && file1.is_open())
    {
        std::getline(file,line);
        while(1)
        { 
            i = 0;
            pos = line.find(s1);
            while(pos != std::string::npos && s1[0])
            {
                
                file1 << line.substr(0,pos);
                file1 << s2;
                line = line.substr(pos + s1.length(),line.length());
                pos = line.find(s1);
                if (pos== std::string::npos)
                {
                    file1 << line;
                    i =1;
                    break;
                }
            }
            if (i == 0)
                file1 << line;
            if(std::getline(file,line))
                file1 << std::endl;
            else
                break;
        }
    }
    else
    {
        std::cout << "Invalid File !" << std::endl;
        exit(1);
    }
}
