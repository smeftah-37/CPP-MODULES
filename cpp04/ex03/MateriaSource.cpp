#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        materias[i] = NULL;
}
void MateriaSource::learnMateria(AMateria* l)
{
    for(int i = 0; i < 4;i ++)
    {
        if(materias[i] == NULL)
        {
            materias[i] = l;
            
            return;
        }

    }
    if(l != NULL)
        delete l;
    std::cout << "No space left to learn a new Materia" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &ref)
{
    if(this != &ref)
        *this = ref;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->materias[i] != NULL)
            delete(this->materias[i]);
        if(ref.materias[i] != NULL)
            this->materias[i] = ref.materias[i]->clone();
        else
            this->materias[i] = NULL;
    }
    return (*this);
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i <4 ; i++)
    {
        if(materias[i] != NULL && materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
    }
    return NULL;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(materias[i] != NULL)
            delete materias[i];
    }
}