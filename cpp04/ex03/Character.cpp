#include "Character.hpp"

Character::Character(std::string n)
{
    this->name = n;

    for(int i = 0; i < 4; i++)
    {
        this->invetory[i] = NULL;
    }



}
void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && invetory[idx] != NULL)
    {
        invetory[idx]->use(target);
    }
    else
        std::cout << "incorrect Index" << std::endl;
 }
std::string const & Character::getName() const
{
    return (name);
    
}
Character::Character(const Character &ref)
{
    if(this != &ref)
        *this = ref;
}
Character &Character::operator=(const Character &ref)
{
    this->name = ref.name;
    for(int i = 0; i < 4; i++)
    {
        if(this->invetory[i] != NULL)
            delete this->invetory[i];
        if(ref.invetory[i]  != NULL)
            this->invetory[i] = ref.invetory[i]->clone();
        else
            this->invetory[i] = NULL;
    }
    return (*this);
}
void Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << " Invalid Equipement (invalid materia)" << std::endl;
        return;
    }
    for(int i = 0;i < 4; i++)
    {
        if(invetory[i] == NULL)
        {
            invetory[i] = m;

            return ;
        }
    }
    std::cout << "there is no space to equip another AMateria" << std::endl;
}
void Character::unequip(int idx)
{
    if(idx >= 0 &&  idx < 4 && invetory[idx] != NULL)
        invetory[idx] = NULL;
    else
        std::cout << "Incorrect index" << std::endl;
}
Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(invetory[i] != NULL)
            delete invetory[i];
    }
}