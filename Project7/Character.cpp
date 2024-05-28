#include "Character.h"

void Character::PlusWeapon(Weapon* weapon)
{
	weapons.push_back(weapon);
}

void Character::Attack(Character& target)
{
	if (weapons.empty())
	{
		cout << "무기를 가지고 있지 않습니다." << endl;
	}

}

