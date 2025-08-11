#include "Animal.hpp"
#include "Brain.hpp"


Animal::Animal()
{
	this->type = "base_animal";
	std::cout << "base animal created." << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "base animal copy constr used." << std::endl;
}

Animal::~Animal()
{
	std::cout << "base animal destruct." << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		type = animal.type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "base animal sound ***!." << std::endl;
}

