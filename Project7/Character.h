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
	int atk = 0;

public:
	Character() {}

	string getName() { return name; }
	int getHP() { return hp; }
	int getLevel() { return level; }
	int getAtk() { return atk; }

	void setName(string name) { this->name = name; }
	void setHP(int hp) { this->hp = hp; }
	void setLevel(int level) { this->level = level; }
	void setAtk(int atk) { this->atk = atk; }


};

class Player :public Character
{
private:
	vector<Weapon*> weapons;
	int weapon_num = 0;

public:
	Player() {}
	int getWeapon_num() { return weapon_num; }
	void setWeapon_num(int weapon_num) { this->weapon_num = weapon_num; }
	void setWeapon(Weapon* weapon);

};

class Monster : public Character
{

public:
	Monster(int atk, int hp) {}

};
#endif