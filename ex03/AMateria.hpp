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
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


class Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

class Cure : public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif