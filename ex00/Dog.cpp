#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "dog constr used." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &animal)
{
	this->type = animal.type;
	std::cout << "dog copy constr used." << std::endl;
}

Dog::~Dog()
{
	std::cout << "dog destr used." << std::endl;
}

Dog &Dog::operator=(const Dog &animal)
{
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "dog sound" << std::endl;
}
