#include "easyfind.hpp"


template <typename T>
typename T::iterator easyfind(T &a, int b)
{
    typename T::iterator it = std::find(a.begin(), a.end() , b);
    if(it == a.end())
        throw std::out_of_range("element not found in the container");
    return it;
    
}

int main()
{
    try{
        std::list<int> a;
        a.push_back(1);
        a.push_back(2);

        a.push_back(3);
        a.push_back(4);
        a.push_back(5);

        std::list<int>::iterator it = easyfind(a,2);
        std::cout << "position ==" << std::distance(a.begin(),it) << std::endl;
        std::cout << *it << std::endl;
        std::vector<int> b;
        b.push_back(2);
        b.push_back(1);

        b.push_back(3);
        b.push_back(4);
        b.push_back(5);

        std::vector<int>::iterator it1 = easyfind(b,10);
        std::cout << "position ==" << std::distance(b.begin(),it1) << std::endl;
        std::cout << *it << std::endl;
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << std::endl;
    }

}