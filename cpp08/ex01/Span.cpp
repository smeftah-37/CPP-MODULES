#include "Span.hpp"

Span::Span()
{

}
Span::Span(unsigned int N):_N(N)
{

}
Span::~Span()
{

}
Span::Span(const Span &s)
{
    *this = s;
}
Span &Span::operator=(const Span &s)
{
    if (this != &s)
    {
        _N = s._N;
        _lst = s._lst;
    }
    return (*this);
}
void    Span::addNumber(int nbr)
{
    if(_lst.size() < _N)
        _lst.push_back(nbr);
    else
        throw std::out_of_range("can't add another number");

}
int Span::shortestSpan()
{
     if(_lst.size() < 2)
        throw std::runtime_error("Invalid container size");
    std::list<int> tmp = _lst;
    std::list <int>::iterator t;
    int diff;
    tmp.sort();
    diff = std::numeric_limits<int>::max();
    for(std::list<int>::iterator itt= tmp.begin();itt != tmp.end();++itt)
    {
        t = itt;
        if(++t != tmp.end())
        {
            int tmp_value = *(t) - *itt;
            diff= std::min(diff,tmp_value);
        }
    }
    return (diff);
}
int Span::longestSpan()
{
    if(_lst.size() < 2)
        throw std::runtime_error("Invalid container size");
    std::list<int>::const_iterator it = std::min_element(_lst.begin(),_lst.end());
    std::list<int>::const_iterator it1 = std::max_element(_lst.begin(),_lst.end());
    return *it1 - *it;


}


void Span::addNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
    if(distance(begin, end) + _lst.size() < _N)
    {
        _lst.insert(_lst.end(), begin, end);
    }
    else
        throw std::out_of_range("can't add another number");

}

void Span::addNumber()
{
    std::srand(time(NULL));
    while(_lst.size() < _N)
        _lst.push_back(rand());
}

