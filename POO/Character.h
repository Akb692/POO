#pragma once
#include <iostream>
#include <vector>
#include "Item.h"

class Character
{
private:
	std::string name;
	int health;
	std::vector<Item> Inventory;
public:
	int StatDef;
	int StatAtk;
	int StatSpeed;

	Character(const std::string& n, int h, int atk, int def, int spd);

	void DisplayStat() const;
	void TakeDmg(Character& c, int Dmg);
	void Heal(Character& c);
	void AddItem(const Item& item);
	void UseItem(int index);
};

