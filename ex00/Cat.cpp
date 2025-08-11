#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "cat constr used." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "cat copy constr used." << std::endl;
}
Cat::~Cat()
{
	std::cout << "cat destr used." << std::endl;
}
Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		type = cat.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}
