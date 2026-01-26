#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure & src);
	virtual ~Cure();

	Cure &	operator=(Cure const & rhs);

	AMateria*	clone() const;
	void use(ICharacter& target);
};

#endif