#ifndef ITER_H
#define ITER_H

#include <iostream>
template <typename T, typename U>
void iter(T *array, size_t length_array, void(*func)( U&));

#endif