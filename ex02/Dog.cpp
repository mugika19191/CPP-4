#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	std::cout << "dog constr used." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &animal)
{
	this->brain = new Brain(*animal.brain);
	this->type = animal.type;
	std::cout << "dog copy constr used." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "dog destr used." << std::endl;
}

Dog &Dog::operator=(const Dog &animal)
{
	if (this != &animal)
	{
		this->type = animal.type;
		*brain = *animal.brain;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "dog sound" << std::endl;
}
Brain *Dog::getBrain() const
{
	return this->brain;
}