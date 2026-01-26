#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria & src);
		virtual ~AMateria();
		AMateria &	operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
