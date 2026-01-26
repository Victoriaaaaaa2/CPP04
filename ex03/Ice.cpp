#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice's default constructor called" << std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src)
{
	std::cout << "Ice's copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice's destructor called" << std::endl;
}

Ice &	Ice::operator=( Ice const & rhs )
{
	std::cout << "Ice's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

AMateria*	Ice::clone() const
{
	std::cout << "Ice's clone function called" << std::endl;
	
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at "
			  << target.getName()
			  << " *\""
			  << std::endl;
}

