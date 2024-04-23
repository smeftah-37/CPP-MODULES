#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void    ft_test()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    WrongAnimal* meta1 = new WrongAnimal();
    WrongAnimal* a = new WrongCat();
    std::cout << a->getType() << " " << std::endl;
    a->makeSound(); //will output the cat sound!
    meta1->makeSound();
    delete meta1;
    delete a;
}
int main()
{
    ft_test();
    system("leaks Animal");
    return 0;
}