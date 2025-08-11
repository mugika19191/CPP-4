#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};