#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int SIZE = 10;
    Animal* animals[SIZE];

    // Create dogs and cats
    for (int i = 0; i < SIZE / 2; ++i)
        animals[i] = new Dog();
    for (int i = SIZE / 2; i < SIZE; ++i)
        animals[i] = new Cat();

    // Clean up
    for (int i = 0; i < SIZE; ++i)
        delete animals[i];

    std::cout << "\n--- Deep Copy Test ---\n";

    Dog original;
	original.getBrain()->ideas[0] = "Chase the mailman";
	original.getBrain()->ideas[1] = "Bark at the cat";

    Dog copy = original; // Copy constructor
	copy.getBrain()->ideas[0] = "Eat food";
	copy.getBrain()->ideas[1] = "Nap in the sun";

    // Print ideas
    std::cout << "Original Dog Brain Idea 0: " << original.getBrain()->ideas[0] << std::endl;
    std::cout << "Original Dog Brain Idea 1: " << original.getBrain()->ideas[1] << std::endl;
    std::cout << "Copied Dog Brain Idea 0: " << copy.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Dog Brain Idea 1: " << copy.getBrain()->ideas[1] << std::endl;

    // Check pointers (they must be different)
    std::cout << "Original Brain Address: " << original.getBrain() << std::endl;
    std::cout << "Copied Brain Address: " << copy.getBrain() << std::endl;

    return 0;
}
