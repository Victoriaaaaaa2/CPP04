#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

AMateria::AMateria(std::string const & type) 
{
	std::cout << "AMateria's parametric constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria & src) : type(src.type)
{
	std::cout << "AMateria's copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria's destructor called" << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.type;
	}

	return (*this);
}

std::string	const & AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << this->type 
			  << ": \"* uses " 
			  << target.getName() 
			  << " *\"" 
			  << std::endl;
}
