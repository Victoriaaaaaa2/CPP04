#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	test00( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void	test01( void )
{
	Animal* animals = new Animal[10];
	int	i = 0;

	while (i < 5)
	{
		animals[i] = Cat();
		i++;
	}
	while (i < 10)
	{
		animals[i] = Dog();
		i++;
	}
	delete[] animals;
}

int main()
{
	test00();
	test01();
	return 0;
}
