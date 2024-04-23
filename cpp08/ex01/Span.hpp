#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <list>
#include <exception>
#include <limits>
#include <algorithm>

class Span
{
    std::list<int> _lst;
    unsigned int _N;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &s);
        Span &operator=(const Span &s);
        void    addNumber(int nbr);
        int shortestSpan();
        int longestSpan();
        void addNumber();
       void addNumber(std::list<int>::iterator begin, std::list<int>::iterator end);

};

#endif



