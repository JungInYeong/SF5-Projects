#include "Character.h"

void Player::setWeapon(Weapon* weapon)
{
	this->weapons.push_back(weapon);
}

//void Player::PlusWeap()
//{
//	int choice;
//
//	cout << "¹«½¼ ¹«±â¸¦ ÁÝ°Ú½À´Ï±î? (1: Ä®, 2: ÃÑ)" << endl;
//	while (1)
//	{
//		if (choice == 1)
//		{
//			weapon_num++;
//			cout << "Ä®À» ÁÖ¿ü½À´Ï´Ù. (°ø°Ý·Â: 5, °ø°Ý°¡´ÉÈ½¼ö: 3)" << endl;
//		}
//		else if (choice == 2)
//		{
//			weapon_num++;
//			cout << "ÃÑÀ» ÁÖ¿ü½À´Ï´Ù. (°ø°Ý·Â: 10, °ø°Ý°¡´ÉÈ½¼ö: 1)" << endl;
//		}
//	}
//
//	
//}