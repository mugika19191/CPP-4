#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	//since all the calsses are const, every function called after 
	//needs to be const to, so that the compiler can trust that we 
	// are not modying anithing inside the class
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //cat
	j->makeSound(); //dog
	meta->makeSound(); //ANimal
	k->makeSound(); //wrong

	delete meta;
	delete j;
	delete i;
	delete k;

	return 0;
}
