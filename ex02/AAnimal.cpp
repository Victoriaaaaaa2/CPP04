#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( void ) : type("Default_type")
{
	std::cout << "AAnimal's default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src ) : type(src.type)
{
	std::cout << "AAnimal's copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal's destructor called" << std::endl;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

std::string	AAnimal::getType() const
{
	return this->type;
}