#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &animal);
		~Cat();
		Cat &operator=(const Cat &animal);
		void makeSound() const;
		Brain* getBrain() const;
};