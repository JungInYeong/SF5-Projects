#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Weapon.h"
using namespace std;

class Character
{
private:
	int hp = 0;
	int level = 0;
	string name;
	vector<Weapon*> weapons;

public:
	Character() {}
	void PlusWeapon();
	void Attack();

	string getName() { return this->name; }
	int getHp() { return this->hp; }
	int getLevel() { return this->level; }

	void setName(string name) { this->name = name; }
	void setHP(int hp) { this->hp = hp; }
	void setLevel(int level) { this->level = level; }
};

class Player : public Character
{


};
