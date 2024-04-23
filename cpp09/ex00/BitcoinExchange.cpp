#include "BitcoinExchange.hpp"


bool Bitcoin::validYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Bitcoin::validDate(int year, int month, int day) {
    if (year < 0 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int daysInMonth = 0;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = validYear(year) ? 29 : 28;
            break;
        default:
            return false;  
    }

    return day <= daysInMonth;
}

void Bitcoin::parsing()
{
    std::ifstream file(_nameFile.c_str());
    if(!file.is_open())
        throw std::ios_base::failure("Error of opening the file");
    std::string line;
    getline(file,line);
    if(line != "date | value")
        std::cerr << "Error: Bad input "  << std::endl;
    while(getline(file,line))
    {
        std::vector<std::string> lst = split(line,'|');
        try
        {
            if(lst.size() != 2)
            {
                 std::string kiki = "Error: Bad input => " + line; 

                throw  std::runtime_error(kiki.c_str());
            }
            checkDate(lst[0],1);
            float v = checkValue(lst[1],1);
            myContainer.push_back(std::make_pair(lst[0].substr(0,lst[0].length() - 1),v));
            findAndPrint(); 
               
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            continue;
        }
        
    }
}
void    Bitcoin::findAndPrint()
{
    std::ifstream file("data.csv");
    std::string previousLine;
    size_t i;
    if(!file.is_open())
        throw std::ios_base::failure("Error of opening the file of database");
    std::string line;
    getline(file,line);
    while(std::getline(file,line))
    {
        //std::cout << myContainer[myContainer.size() -1].first <<"|"<< std::endl;
        if((i = line.find(myContainer[myContainer.size() -1].first)) != std::string::npos)
        {
            std::cout << myContainer[myContainer.size() - 1].first << " ==> "<< myContainer[myContainer.size() - 1].second << " = " << myContainer[myContainer.size() - 1].second * checkValue(line.substr(i +myContainer[myContainer.size() - 1].first.length() + 1),0) << std::endl;
            break;
        }
        else if(myContainer[myContainer.size() -1].first < line.substr(0,line.find(",")))
        {
            std::cout <<  myContainer[myContainer.size() - 1].first << " ==> "<< myContainer[myContainer.size() - 1].second << " = " << myContainer[myContainer.size() - 1].second * checkValue(previousLine.substr(previousLine.find(",") + 1),0) << std::endl;
            break;
        }
        previousLine = line;
    }
     file.clear(); // Clear any error flags
    file.seekg(0, std::ios::beg);

    // Read lines again from the beginning

    file.close();

        
}

std::vector<std::string> Bitcoin::split(std::string s, char c)
{
    std::stringstream ss(s);
    std::vector<std::string> spl;
    std::string line;
    while(std::getline(ss,line,c))
    {
        spl.push_back(line);
    }
    if(s[s.length() -1] == c)
        spl.push_back("");
    return spl;
}

Bitcoin::Bitcoin()
{

}
Bitcoin::Bitcoin(const std::string &name):_nameFile(name)
{

}
Bitcoin::~Bitcoin()
{

}
Bitcoin::Bitcoin(const Bitcoin &b)
{
    *this = b;
}
Bitcoin &Bitcoin::operator=(const Bitcoin &b)
{
    if(this != &b)
        myContainer = b.myContainer;
    return (*this);
}
int Bitcoin::checkDate(std::string dat, int check)
{
    std::vector<std::string> spl;
    if(check == 1)
    {
    if(dat.length()  != 0 &&  dat[dat.length() -1] != ' ')
    {
        
        std::string kiki = "Error: Bad input => " + dat; 
        throw  std::runtime_error(kiki.c_str());
    }
    else
        dat = dat.substr(0,dat.length() - 1);
    }
    for (size_t i = 0; i < dat.length();i++)
    {
        if(!isdigit(dat[i]) && dat[i] != '-')
        {
              std::string kiki = "Error: Bad input => " + dat; 
                throw  std::runtime_error(kiki.c_str());
        }
    }
    spl = split(dat,'-');
    if(spl.size() != 3)
    {

        std::string kiki = "Error: Bad input => " + dat; 
        throw  std::runtime_error(kiki.c_str());
    }
    if(!validDate(atoi(spl[0].c_str()),atoi(spl[1].c_str()),atoi(spl[2].c_str())))
    {
        std::string kiki = "Error: Bad input => " + dat; 
        throw  std::runtime_error(kiki.c_str());
       
    }
    return (1);
}
float Bitcoin::checkValue(std::string value, int check)
{
    if(check == 1)
    {
    if(value.length() != 0 && value[0] !=' ')
    {
  
        std::string kiki = "Error: Bad input  => " + value; 
        throw  std::runtime_error(kiki.c_str());
    }
        
    else
        value = value.substr(1);
    }
    char *pt;
    double result = strtod(value.c_str(),&pt);

    if(*pt != '\0' || value.empty() || value[0]=='-')
    {

        std::string kiki;
        if (value[0] == '-')
            kiki = "Error: not a positive number => " + value; 
        else
            kiki = "Error: Bad input => " + value; 

        throw  std::runtime_error(kiki.c_str());
    }
    if(result > 1000.0 && check == 1)
       {

        std::string kiki =    "Error: Too large number  => " + value; 
        throw std::runtime_error(kiki.c_str());
    }

    if(check == 1)
    {
    int unsigned long i = value.find(".");
    if (i != std::string::npos)
    {
        value = value.substr(0, i);
    }
    if ((value[0] == '+' && value > "+1000" && value.length() >= 5) || (value > "1000" && value.length() >= 4))
    {
          std::string kiki = "Error: Too large number => " + value; 
        throw  std::runtime_error(kiki.c_str());
    }
    }
    return result;

}