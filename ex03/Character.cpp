#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(std::string name) : name(name)
{
	std::cout << "Character's default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character & src)
{
	std::cout << "Character's copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i] != NULL)
			this->inventory[i] = src.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = src.name;
}

Character::~Character()
{
	std::cout << "Character's destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
}

Character &	Character::operator=(Character const & rhs)
{
	std::cout << "Character's copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs.inventory[i] != NULL)
				this->inventory[i] = rhs.inventory[i]->clone();
		}
	}

	return (*this);	
}

std::string	const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}
