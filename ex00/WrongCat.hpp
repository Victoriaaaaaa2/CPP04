#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void ); // Default constructor
	WrongCat( const WrongCat & src ); // Copy constructor
	virtual ~WrongCat( void ); // Destructor

	WrongCat &		operator=( WrongCat const & rhs ); // Copy assignment operator

	void		makeSound() const;
};

#endif