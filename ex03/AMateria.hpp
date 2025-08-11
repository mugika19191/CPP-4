#include <iostream>
#include "ICharacter.hpp"
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		virtual ~AMateria();
		AMateria const	&operator=(AMateria const &copy);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif