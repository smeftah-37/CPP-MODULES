#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


class Character:public ICharacter
{
    private:
        std::string name;
        AMateria* invetory[4];
    public:
        Character(std::string n);
        Character(const Character &ref);
        Character &operator=(const Character &ref);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};
#endif