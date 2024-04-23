#include "Cat.hpp"
#include "Dog.hpp"

void ft_test()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog;
	delete cat;
	Dog medor;
	Cat a;
	Dog & ref = medor;
	Cat & a_ref = a;
	Dog copy(ref);
	Cat a_copy(a_ref);
	const Animal	*(animal_array[4]);
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		animal_array[i]->makeSound();
		delete animal_array[i];
	}
}
int main() 
{
	
	ft_test();
	system("leaks Animal");
}