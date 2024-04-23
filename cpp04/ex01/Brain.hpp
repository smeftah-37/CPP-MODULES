#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain &operator=(Brain const &ref);
        Brain(Brain const &ref);
        void setIdeas(std::string idea);
        ~Brain();
};

#endif