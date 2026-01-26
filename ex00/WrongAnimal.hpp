#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal( void ); // Default constructor
	WrongAnimal( const WrongAnimal & src ); // Copy constructor
	virtual ~WrongAnimal( void ); // Destructor

	WrongAnimal &			operator=( WrongAnimal const & rhs ); // Copy assignment operator

	void		makeSound() const;
	std::string	getType() const;
};

#endif