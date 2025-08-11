#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &animal);
		~Dog();
		Dog &operator=(const Dog &animal);
		void makeSound() const;
		Brain* getBrain() const;
};