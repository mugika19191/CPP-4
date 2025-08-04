#include <iostream>
#ifndef BRAIN_HPP
#define BRAIN_HPP
class Brain
{
	public: 
		std::string ideas[100];
		Brain();
		Brain(const Brain &brain);
		~Brain();
		Brain &operator=(const Brain &animal);
};
#endif