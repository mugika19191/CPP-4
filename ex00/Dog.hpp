#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &animal);
		~Dog();
		Dog &operator=(const Dog &animal);
		void makeSound() const;
};