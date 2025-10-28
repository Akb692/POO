#include <iostream>
#include "Character.h"
#include "Item.h"
#include <vector>


int main()
{
    Character c1("test", 100, 1, 1, 1);
    c1.DisplayStat();


    Item HealPot("HealPotion", 20, 0, 0, 0, 50);

    HealPot.DisplayStat();

    
}

