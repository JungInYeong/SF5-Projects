#include "Character.h"

void Character::attack(Character& target) {
    // 플레이어가 가지고 있는 무기로 공격을 수행
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
    // 플레이어가 가지고 있는 무기로 몬스터를 공격
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

// Player 클래스의 무기 추가 메소드
void Player::setWeapon(Weapon * weapon) 
{
	weapons.push_back(weapon);
}

void Monster::attack(Character& target)
{
	cout << "몬스터 공격" << endl;
	target.takeDamage(atk);
}
