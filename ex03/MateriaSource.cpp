#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource's constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	std::cout << "Character's copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.materias[i] != NULL)
			this->materias[i] = src.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource's destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource's copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		int	i;
		
		for (i = 0; i < 4; i++)
		{
			if (rhs.materias[i] != NULL)
			{
				delete this->materias[i];
				this->materias[i] = NULL;
			}
		}
		for (i = 0; i < 4; i++)
		{
			if (rhs.materias[i] != NULL)
				this->materias[i] = rhs.materias[i]->clone();
		}
	}

	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			return;
		}
	}
	if (materia)
		delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else
		return 0;
}