#include "Array.hpp"
#include <cstdlib>
#include <ctime>

template <class T>
Array<T>::Array():_n(0)
{
    _array = new T[0];
}
template <class T>
Array<T>::Array(unsigned int n):_n(n)
{
    _array = new T[_n]();

}
template <class T>
size_t Array<T>::size() const
{
    return _n;
}

template <class T>
Array<T> & Array<T>::operator=(const Array<T> &A)
{
    if(this != &A)
    {
        _n = A.size();
        if(_array != NULL)
            delete[] _array;
        _array = new T[_n]();
        for(size_t i = 0; i < _n; i ++)
        {
            _array[i] = A._array[i];
        }
        
    }
    return (*this);
}

template <class T>
T& Array<T>::operator[](size_t index) const
{
    if (index < size())
        return _array[index];
    throw std::out_of_range("out of range");
}


template <class T>
Array<T>::Array(const Array &A):_array(NULL)
{
    *this = A;
}

template <class T>
Array<T>::~Array()
{
    if(_array != NULL)
        delete[] _array;
}

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}