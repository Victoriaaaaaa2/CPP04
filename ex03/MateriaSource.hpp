#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	private:
		AMateria*	materias[4];
};

#endif