#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	test00( void )
{
	std::cout << "TEST00" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void	test01( void )
{
	std::cout << "TEST01" << std::endl;
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

void	test02( void )
{
	std::cout << "TEST02" << std::endl;
	Dog	dog1;
	{
		Dog	dog2 = dog1;
	}
}

int main()
{
	test00();
	test01();
	test02();
	return 0;
}
