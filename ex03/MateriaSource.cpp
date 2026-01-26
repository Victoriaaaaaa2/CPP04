#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource's constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
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
		return NULL;
}