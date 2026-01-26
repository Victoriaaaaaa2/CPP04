#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
protected:
	std::string	type;

public:
	AAnimal( void ); // Default constructor
	AAnimal( const AAnimal & src ); // Copy constructor
	virtual ~AAnimal( void ); // Destructor

	AAnimal &		operator=( AAnimal const & rhs ); // Copy assignment operator

	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif
