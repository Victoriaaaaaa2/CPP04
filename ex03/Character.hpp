#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		AMateria*	inventory[4];
		std::string	name;
};

#endif