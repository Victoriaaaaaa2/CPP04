#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public AAnimal
{
private:
	Brain *	brain;

public:
	Cat( void ); // Default constructor
	Cat( const Cat & src ); // Copy constructor
	virtual ~Cat( void ); // Destructor

	Cat &	operator=( Cat const & rhs ); // Copy assignment operator

	void	makeSound() const;
};

#endif