#include "Character.h"
#include <iostream>






    Item::Item(const std::string& n, int h, int atk, int def, int spd, int val)
        : name(n), IncHealth(h), IncAtk(atk), IncDef(def), IncSpeed(spd), Value(val) {}




    void Item::DisplayStat()
    {
        std::cout << "Name : " << name << std::endl;
        std::cout << "Health increase : " << IncHealth << std::endl;
        std::cout << "Atk increase : " << IncAtk << std::endl;
        std::cout << "Def increase : " << IncDef << std::endl;
        std::cout << "Speed increase : " << IncSpeed << std::endl;
        std::cout << "Value : " << Value << std::endl;
    }
