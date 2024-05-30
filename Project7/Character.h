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
protected:
	int hp;
	int level;
	string name;
	int atk;
	vector<Weapon*> weapons;

public:
	Character() :hp(0), level(0), atk(0) {}
	Character(int hp, int level, int atk, string name) :hp(hp), level(level), atk(atk), name(name) {}

	string getName() { return name; }
	int getHP() { return hp; }
	int getLevel() { return level; }
	int getAtk() { return atk; }

	void setName(string name) { this->name = name; }
	void setHP(int hp) { this->hp = hp; }
	void setLevel(int level) { this->level = level; }
	void setAtk(int atk) { this->atk = atk; }
	void takeDamage(int damage) { hp -= damage; }
	void Levelup() { level++; hp = 100; }
	
	void setWeapon(Weapon* weapon) { weapons.push_back(weapon); }
	void attack(Character& target);
};

class Player :public Character
{
protected:
	vector<Weapon*> weapons;
	int weapon_num = 0;

public:
	Player(string name) : Character(100, 1, 10, name) {}
	void attackMonster(Monster& target);
	void respawn() { hp = 100; } // 플레이어가 죽으면 체력을 회복시켜줌
	void setWeapon(Weapon* weapon); // 플레이어에게 무기를 설정하는 메소드 추가
};

class Monster : public Character
{
public:
	Monster(int atk, int hp, string name): Character(hp, 1, atk, name) {}

	void attack(Character& target);
};
#endif