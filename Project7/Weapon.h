#pragma once
#ifndef WEAPON_H
#define WEAPON_H
#include "Character.h"

class Weapon
{
protected:
	int attackPower;
	int attackCount;

public:
	Weapon(int power, int count) : attackPower(power), attackCount(count) {}
	virtual void attack() = 0;
	int getAttackPower() { return attackPower; }
	int getAttackCount() { return attackCount; }


};

class Knife : public Weapon
{
public:
	Knife() : Weapon(5,3) {}
	void attack() override { cout << "Âî¸£±â" << endl; }
};

class Gun : public Weapon
{
public:
	Gun() : Weapon(10,1) {}
	void attack() override { cout << "ÃÑ½î±â" << endl; }
};

#endif