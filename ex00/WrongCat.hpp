#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &animal);
		~WrongCat();
		WrongCat &operator=(const WrongCat &animal);
		void makeSound() const;
};