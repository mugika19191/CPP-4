#include "AMateria.hpp"
#include "ICharacter.hpp"

std::string const &AMateria::getType() const
{
	return(this->type);
}

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

AMateria::AMateria(std::string const &t_type) : type(t_type)
{
}

AMateria::~AMateria()
{
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

void AMateria::use(ICharacter& target)
{
	(void)(target);
}
