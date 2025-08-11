#include "Character.hpp"


Character::Character(std::string cname) : name(cname)
{
	for (int i = 0; i < 4; ++i) 
	{
		this->inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i) 
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i<4; i++)
	{
		if ((this->inventory[i]) == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if ((this->inventory[idx]) == NULL)
		return ;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if ((this->inventory[idx]) == NULL)
		return ;
	this->inventory[idx]->use(target);
}
