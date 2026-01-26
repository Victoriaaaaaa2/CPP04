#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain's default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain's copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain's copy assignment operator called" << std::endl;

	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}
