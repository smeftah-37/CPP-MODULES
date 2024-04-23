#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T,C>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &m): std::stack<T, C>(m){};
        MutantStack& operator=(const MutantStack &m){std::stack<T,C>::operator=(m); return (*this);};

        typedef typename C::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        void push_back(const T &value)
        {
            this->c.push_back(value);
        }
        
};

#endif