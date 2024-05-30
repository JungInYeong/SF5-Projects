// ������Ʈ 7 ���� �����
//1. ĳ����, ����, Į, �� Ŭ������������ش�.
//2. ĳ����Ŭ����- �ʵ�: ��hp��, ��level��, ������顯- �޼ҵ�: �����ݱ�, �����ϱ�(�����ϱ�޼ҵ忡���°������ִ¹���鸸����ؼ������Ҽ�������,
//	���ݴ���ĳ������hp���ش��ϴ¹����ǰ��ݷ¸�ŭ�����Ѵ�.)
//3. ����Ŭ����- �ʵ�: ���ݷ�, ���ݰ���Ƚ��- �޼ҵ�: �����ϱ�
//4. ��& ĮŬ����(����Ŭ��������ӹ޴�Ŭ����)- Į: ���ݷ�- 5, ���ݰ���Ƚ��- 3, �����ϱ�- "���" ���- ��: ���ݷ�- 10, ���ݰ���Ƚ��- 1, �����ϱ�- "�ѽ��" ���
//5. ���Ϻи��ϱ�

#include "Character.h"
void chooseWeapon(Player& player);

int main() {
    string playerName;
    cout << "�÷��̾��� �̸��� �Է��ϼ���: ";
    cin >> playerName;
   
    Player player(playerName);
    cout << "�÷��̾� " << player.getName() << "�� �����Ǿ����ϴ�." << endl;

    vector<Monster> monsters;
    monsters.push_back(Monster(7, 50, "Monster1")); // ù ��° ����
    monsters.push_back(Monster(10, 60, "Monster2")); // �� ��° ����
    monsters.push_back(Monster(15, 70, "Monster3")); // �� ��° ����

    int defeatedMonsters = 0;
    while (defeatedMonsters < 3) 
    {
        cout << "\n*** ���� " << monsters[defeatedMonsters].getName() << " ���� ***" << endl;

        // ���� ����
        chooseWeapon(player);

        // ����

        while (player.getHP() > 0 && monsters[defeatedMonsters].getHP() > 0) 
        {
            cout << "\n�÷��̾� ��!" << endl;
            player.attackMonster(monsters[defeatedMonsters]);
            cout << "���� HP: " << monsters[defeatedMonsters].getHP() << endl;

            if (monsters[defeatedMonsters].getHP() > 0)
            {
                cout << "\n���� ��!" << endl;
                monsters[defeatedMonsters].attack(player);
                cout << "�÷��̾� HP: " << player.getHP() << endl;
            }
        }

        // �÷��̾ ������� ���
        if (player.getHP() > 0)
        {
            cout << "���� " << monsters[defeatedMonsters].getName() << "�� �����ƽ��ϴ�!" << endl;
            defeatedMonsters++;
            player.Levelup();
            cout << "������! ���� ����: " << player.getLevel() << endl;
        }
        // �÷��̾ �׾��� ���
        else
        {
            cout << "�÷��̾ ����߽��ϴ�. �ٽ� ���Ϳ��� ������ �����մϴ�." << endl;
            player.respawn();
        }
    }

    cout << "\n��� ���͸� �����ƽ��ϴ�. ���� ����!" << endl;

    return 0;
}

void chooseWeapon(Player& player)
{
	int choice;
	bool validChoice = false;
	while (!validChoice)
	{
		std::cout << "���⸦ �����ϼ��� (1: Į, 2: ��): ";
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
			std::cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << std::endl;
			continue;
		}
	}
}
