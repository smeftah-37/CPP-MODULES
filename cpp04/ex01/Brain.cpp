#include "Brain.hpp"
Brain::Brain()
{
    std::cout << "Default Constructer Brain Called" << std::endl;
}
Brain &Brain::operator=(Brain const &ref)
{
    if(this != &ref)
    {
        for(int i = 0; i < 100; i++)
        {
            ideas[i] = ref.ideas[i];
        }
    }
    return (*this);
}
 void Brain::setIdeas(std::string idea)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = idea;
}

Brain::Brain(Brain const &ref)
{
    std::cout << "copy constructer Brain Called" << std::endl;
    *this = ref;
}
Brain::~Brain()
{
    std::cout << "Destructer Brain Called" << std::endl;

}