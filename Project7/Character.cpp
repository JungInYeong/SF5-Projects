#include "Character.h"

void Player::setWeapon(Weapon* weapon)
{
	this->weapons.push_back(weapon);
}

//void Player::PlusWeap()
//{
//	int choice;
//
//	cout << "���� ���⸦ �ݰڽ��ϱ�? (1: Į, 2: ��)" << endl;
//	while (1)
//	{
//		if (choice == 1)
//		{
//			weapon_num++;
//			cout << "Į�� �ֿ����ϴ�. (���ݷ�: 5, ���ݰ���Ƚ��: 3)" << endl;
//		}
//		else if (choice == 2)
//		{
//			weapon_num++;
//			cout << "���� �ֿ����ϴ�. (���ݷ�: 10, ���ݰ���Ƚ��: 1)" << endl;
//		}
//	}
//
//	
//}