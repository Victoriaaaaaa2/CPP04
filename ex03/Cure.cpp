#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure's default constructor called" << std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src)
{
	std::cout << "Cure's copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure's destructor called" << std::endl;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure's copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->AMateria::operator=(rhs);
	}

	return (*this);
}

AMateria*	Cure::clone() const
{
	std::cout << "Cure's clone function called" << std::endl;
	
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals "
			  << target.getName()
			  << " 's wounds *\""
			  << std::endl;
}
