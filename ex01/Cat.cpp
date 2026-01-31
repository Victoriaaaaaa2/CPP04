#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Cat's copy constructor called" << std::endl;
	if (src.brain != NULL)
		this->brain = new Brain(*(src.brain));
	else
		this->brain = NULL;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
	if (brain != NULL)
	{
		delete brain;
		brain = NULL;
	}
}

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->Animal::operator=(rhs);
		if (this->brain && rhs.brain) {
			*(this->brain) = *(rhs.brain); // 已有脑子，复用
		} else if (rhs.brain) {
			this->brain = new Brain(*(rhs.brain)); // 没脑子，新建
		}
	}

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
