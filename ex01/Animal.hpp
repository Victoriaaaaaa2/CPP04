#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal( void ); // Default constructor
	Animal( const Animal & src ); // Copy constructor
	virtual ~Animal( void ); // Destructor

	Animal &		operator=( Animal const & rhs ); // Copy assignment operator

	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif
