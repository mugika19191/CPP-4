#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	this->type = "w_base_animal";
	std::cout << "w_base animal created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
	std::cout << "w_base animal copy constr used." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "w_base animal destruct." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this != &animal)
	{
		type = animal.type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "w_base animal sound ***!." << std::endl;
}

