#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	std::cout << "cat constr used." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	this->brain = new Brain(*cat.brain);
	std::cout << "cat copy constr used." << std::endl;
}
Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat destr used." << std::endl;
}
Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		*this->brain = *cat.brain;
		type = cat.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}