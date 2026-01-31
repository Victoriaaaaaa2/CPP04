#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("Default_type")
{
	std::cout << "WrongAnimal's default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) : type(src.type)
{
	std::cout << "WrongAnimal's copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I don't know what sound to make!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}