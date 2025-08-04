#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &animal);
		~Cat();
		Cat &operator=(const Cat &animal);
		void makeSound() const;
};