#include "Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->Animal::operator=(rhs);
	}

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wof!" << std::endl;
}
