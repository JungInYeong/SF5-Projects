#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
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

public:
	Character() {}

	string getName() { return name; }
	int getHP() { return hp; }
	int getLevel() { return level; }

	void setName(string name) { this->name = name; }
	void setHP(int hp) { this->hp = hp; }
	void setLevel(int level) { this->level = level; }


};
#endif