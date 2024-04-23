#include "iter.hpp"



template <typename T, typename U>
void iter(T *array, size_t length_array, void(*func)( U&))
{

    if(array == NULL || func == NULL)
      return ;
    for(size_t i = 0; i < length_array; i++)
    {
        func(array[i]);
    }
 
  
}

template <typename T>
void    PrintArray(T &element)
{
    std::cout << element << std::endl;
}

int main()
{
    int array[] = {1,2,3,4};
    iter(array,4,PrintArray<int>);
}

