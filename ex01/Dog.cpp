#include "Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's copy constructor called" << std::endl;
	if (src.brain != NULL)
		this->brain = new Brain(*(src.brain));
	else
		this->brain = NULL;
	this->type = src.type;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
	if (brain != NULL)
	{
		delete brain;
		brain = NULL;
	}
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
		if (rhs.brain != NULL)
			this->brain = new Brain(*(rhs.brain));
		else
			this->brain = NULL;
	}

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wof!" << std::endl;
}
