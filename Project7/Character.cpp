#include "Character.h"

void Character::attack(Character& target) {
    // �÷��̾ ������ �ִ� ����� ������ ����
    for (Weapon* weapon : weapons) {
        if (weapon->CanDam_n()) {
            weapon->attack();
            target.takeDamage(weapon->getDam());
            break;
        }
    }
}

void Player::attackMonster(Monster& target)
{
    // �÷��̾ ������ �ִ� ����� ���͸� ����
    for (Weapon* weapon : weapons)
    {
        if (weapon->CanDam_n())
        {
            weapon->attack();
            target.takeDamage(weapon->getDam());
            break;
        }
    }
}

// Player Ŭ������ ���� �߰� �޼ҵ�
void Player::setWeapon(Weapon * weapon) 
{
	weapons.push_back(weapon);
}

void Monster::attack(Character& target)
{
	cout << "���� ����" << endl;
	target.takeDamage(atk);
}
