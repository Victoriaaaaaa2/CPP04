#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat's default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat's copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
