#include "Character.h"

void Character::PlusWeapon(Weapon* weapon)
{
	weapons.push_back(weapon);
}

void Character::Attack(Character& target)
{
	if (weapons.empty())
	{
		cout << "���⸦ ������ ���� �ʽ��ϴ�." << endl;
	}

}

