#pragma once
class Item
{
private:
    std::string name;
    int IncHealth;
    int IncAtk;
    int IncDef;
    int IncSpeed;
    int Value;

public:

    Item(const std::string& n, int h, int atk, int def, int spd, int val);
        

    void DisplayStat();
};

