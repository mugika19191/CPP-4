#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		AMateria *learned[4];
	public:
		~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};