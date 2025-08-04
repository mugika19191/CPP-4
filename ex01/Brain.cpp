#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &brain)
{
	for (int i = 0; i < 100; ++i)
        this->ideas[i] = brain.ideas[i];
}

Brain::~Brain()
{
}

Brain &Brain::operator=(const Brain &brain)
{
	// TODO: insert return statement here
	std::copy(brain.ideas, brain.ideas + 100, this->ideas);
	return (*this);
}
