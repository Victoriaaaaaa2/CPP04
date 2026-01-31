#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : type("Default_type")
{
	std::cout << "Animal's default constructor called" << std::endl;
}

Animal::Animal( const Animal & src ) : type(src.type)
{
	std::cout << "Animal's copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor called" << std::endl;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "I don't know what sound to make!" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
