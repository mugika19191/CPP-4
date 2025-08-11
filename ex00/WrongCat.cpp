#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "cat constr used." << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
	std::cout << "cat copy constr used." << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "cat destr used." << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	if (this != &cat)
	{
		type = cat.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "miau" << std::endl;
}
