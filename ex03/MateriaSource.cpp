#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i) 
	{
		if (this->learned[i])
			delete this->learned[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for(int i = 0; i<4; i++)
	{
		if ((this->learned[i]) == NULL)
		{
			this->learned[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if ((this->learned[i]) != NULL && this->learned[i]->getType() == type)
			return (this->learned[i]->clone());
	}
	return (0);
}
