#pragma once
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
using namespace std;

class Weapon
{
private:
	int attack;
	int attack_num;

public:
	int getAttk() { return attack; }
	int getAttk_n() { return attack_num; }

	void setAttk(int attack) { this->attack = attack; }
	void setAttk_n(int attack_num) { this->attack_num = attack_num; }

};

class Sword : public Weapon
{
public:




};

#endif