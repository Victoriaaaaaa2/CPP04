#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
public:
	Brain( void ); // Default constructor
	Brain( const Brain & src ); // Copy constructor
	virtual ~Brain( void ); // Destructor

	Brain &		operator=( Brain const & rhs ); // Copy assignment operator

	std::string		ideas[100];
};

#endif