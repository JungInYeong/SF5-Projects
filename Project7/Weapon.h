#pragma once
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
using namespace std;



class Weapon
{
private:
	int damage;
	int dam_num;

public:
	Weapon(int damage, int dam_num) : damage(damage), dam_num(dam_num) {}
	int getDam() { return damage; }
	int getDam_n() { return dam_num; }

	void setDam(int damage) { this->damage = damage; }
	void setDam_n(int dam_num) { this->dam_num = dam_num; }

	virtual void attack() {};
	bool CanDam_n() { return dam_num > 0; }
	void DamNum() { this->dam_num; }
};

class Sword : public Weapon
{
public:

	Sword() :Weapon(5, 3) {}

	void attack()override
	{
		if (CanDam_n())
		{
			cout << "���!" << endl;
			//DamNum();
		}
		else
		{
			cout << "Į�� ���̻� ����� �� �����ϴ�." << endl;
		}
	}


};

class Gun :public Weapon
{
public:
	Gun() :Weapon(10, 1) {}

	void attack()override
	{
		if (CanDam_n())
		{
			cout << "�� ���!" << endl;
			//DamNum();
		}
		else
		{
			cout << "���� ���̻� ����� �� �����ϴ�." << endl;
		}
	}
};
#endif