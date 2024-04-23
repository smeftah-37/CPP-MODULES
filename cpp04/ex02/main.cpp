
#include"Cat.hpp"
#include "Dog.hpp"
void    ft_tests()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        animals[i]->makeSound();
        delete animals[i];
    }
}

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    ft_tests();
	system("leaks Animal");
   

    return 0;
}
