#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"



class MateriaSource:public IMateriaSource
{
    private:
        AMateria* materias[4];
    public:
        MateriaSource();
        void learnMateria(AMateria* l);
        AMateria* createMateria(std::string const & type);
        MateriaSource(const MateriaSource &ref);
        MateriaSource &operator=(const MateriaSource &ref);
        ~MateriaSource();
};
#endif