#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal
{
public:
	Dog( void ); // Default constructor
	Dog( const Dog & src ); // Copy constructor
	virtual ~Dog( void ); // Destructor

	Dog &	operator=( Dog const & rhs ); // Copy assignment operator

	void	makeSound() const;
};

#endif