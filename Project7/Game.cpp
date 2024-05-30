// 프로젝트 7 게임 만들기
//1. 캐릭터, 무기, 칼, 총 클래스를만들어준다.
//2. 캐릭터클래스- 필드: ‘hp’, ‘level’, ‘무기들’- 메소드: 무기줍기, 공격하기(공격하기메소드에서는가지고있는무기들만사용해서공격할수있으며,
//	공격당한캐릭터의hp가해당하는무기의공격력만큼감소한다.)
//3. 무기클래스- 필드: 공격력, 공격가능횟수- 메소드: 공격하기
//4. 총& 칼클래스(무기클래스를상속받는클래스)- 칼: 공격력- 5, 공격가능횟수- 3, 공격하기- "찌르기" 출력- 총: 공격력- 10, 공격가능횟수- 1, 공격하기- "총쏘기" 출력
//5. 파일분리하기

#include "Character.h"
void chooseWeapon(Player& player);

int main() {
    string playerName;
    cout << "플레이어의 이름을 입력하세요: ";
    cin >> playerName;
   
    Player player(playerName);
    cout << "플레이어 " << player.getName() << "가 생성되었습니다." << endl;

    vector<Monster> monsters;
    monsters.push_back(Monster(7, 50, "Monster1")); // 첫 번째 몬스터
    monsters.push_back(Monster(10, 60, "Monster2")); // 두 번째 몬스터
    monsters.push_back(Monster(15, 70, "Monster3")); // 세 번째 몬스터

    int defeatedMonsters = 0;
    while (defeatedMonsters < 3) 
    {
        cout << "\n*** 몬스터 " << monsters[defeatedMonsters].getName() << " 등장 ***" << endl;

        // 무기 선택
        chooseWeapon(player);

        // 전투

        while (player.getHP() > 0 && monsters[defeatedMonsters].getHP() > 0) 
        {
            cout << "\n플레이어 턴!" << endl;
            player.attackMonster(monsters[defeatedMonsters]);
            cout << "몬스터 HP: " << monsters[defeatedMonsters].getHP() << endl;

            if (monsters[defeatedMonsters].getHP() > 0)
            {
                cout << "\n몬스터 턴!" << endl;
                monsters[defeatedMonsters].attack(player);
                cout << "플레이어 HP: " << player.getHP() << endl;
            }
        }

        // 플레이어가 살아있을 경우
        if (player.getHP() > 0)
        {
            cout << "몬스터 " << monsters[defeatedMonsters].getName() << "를 물리쳤습니다!" << endl;
            defeatedMonsters++;
            player.Levelup();
            cout << "레벨업! 현재 레벨: " << player.getLevel() << endl;
        }
        // 플레이어가 죽었을 경우
        else
        {
            cout << "플레이어가 사망했습니다. 다시 몬스터와의 전투를 시작합니다." << endl;
            player.respawn();
        }
    }

    cout << "\n모든 몬스터를 물리쳤습니다. 게임 종료!" << endl;

    return 0;
}

void chooseWeapon(Player& player)
{
	int choice;
	bool validChoice = false;
	while (!validChoice)
	{
		std::cout << "무기를 선택하세요 (1: 칼, 2: 총): ";
		std::cin >> choice;

		if (choice == 1) 
		{
			player.setWeapon(new Sword());
			validChoice = true;
		}
		else if (choice == 2) 
		{
			player.setWeapon(new Gun());
			validChoice = true;
		}
		else {
			std::cout << "잘못된 선택입니다. 다시 선택하세요." << std::endl;
			continue;
		}
	}
}
