#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>
template <class T>
class Array
{
    T * _array;
    size_t _n;
    public:
        Array();
        Array(unsigned int n);
        size_t size() const;
        Array(const Array &A);
        Array &operator=(const Array &A);
        T& operator[](size_t index) const;
        ~Array();

};

#endif