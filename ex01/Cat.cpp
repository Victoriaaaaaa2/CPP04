#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat's copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
	if (brain != NULL)
	{
		delete brain;
		brain = NULL;
	}
}

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
