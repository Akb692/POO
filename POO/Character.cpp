#include "Character.h"
#include <iostream>
using namespace std;

    Character::Character(const std::string& n, int h, int atk, int def, int spd)
        : name(n), health(h), StatAtk(atk), StatDef(def), StatSpeed(spd) {}



    void Character::DisplayStat() const
    {   
        std::cout << "Name : " << name <<  std::endl;
        std::cout << "HP : " << health << std::endl;
        std::cout << "Atk : " << StatAtk << std::endl;
        std::cout << "Def : " << StatDef << std::endl;
        std::cout << "Speed : " << StatSpeed << std::endl;
    }

    void Character::TakeDmg(Character& c, int Dmg)
    {
        c.health -= Dmg;
    }

    void Character::Heal(Character& c)
    {
        c.health += 20;
    }

    void Character::AddItem(const Item& item)
    {
        Inventory.push_back(item);
    }

    void UseItem(int index)
    {

    }