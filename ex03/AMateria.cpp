#include "AMateria.hpp"
#include "ICharacter.hpp"

std::string const &AMateria::getType() const
{
	return(this->type);
}

AMateria::AMateria(std::string const &t_type) : type(t_type)
{
}

AMateria::AMateria(AMateria const &copy) : type(copy.type)
{
}

AMateria::~AMateria()
{
}
AMateria const &AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}
void AMateria::use(ICharacter &target)
{
	(void)(target);
}
