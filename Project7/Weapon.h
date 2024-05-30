#pragma once
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
using namespace std;

class Weapon
{
private:
	int attk;
	int attk_num;

public:
	int getAttk() { return attk; }
	int getAttk_n() { return attk_num; }

	void setAttk(int attk) { this->attk = attk; }
	void setAttk_n(int attk_num) { this->attk_num = attk_num; }

	virtual void attack() {};

};

class Sword : public Weapon
{
public:

	Sword(int attk, int attk_num) {}
	void attack()override
	{
		cout << "Âî¸£±â!" << endl;
	}
};

class Gun :public Weapon
{
public:
	Gun(int attk, int attk_num) {}
	void attack()override
	{
		cout << "ÃÑ ½î±â!" << endl;
	}
};
#endif