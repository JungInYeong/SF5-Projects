#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int getComputer(int lastNumber)
{
	int numCount = (rand() % 3) + 1;
	for (int i = 0; i <= numCount; i++)
	{
		cout << lastNumber + i << " ";

	}
	cout << endl;

	return lastNumber + numCount;
}

int getUser(int lastNumber) 
{
    int numCount = -1;

    while (numCount < 1 || numCount > 3) {
        cout << "�� ���� ���ڸ� ���Ͻðڽ��ϱ�? (1-3): ";
        cin >> numCount;

        // ���� ��� ���� �ԷµǸ� ��� �޽��� ���
        if (numCount < 1 || numCount > 3) {
            cout << "1~3 ������ ���� �Է��ϼ���." << endl;
            cin.clear(); // ��Ʈ�� �÷��׸� �ʱ�ȭ.
        }
    }

    for (int i = 1; i <= numCount; ++i) {
        cout << lastNumber + i << " ";
    }
    cout << endl;

    return lastNumber + numCount;
}

int main() 
{
    srand(time(NULL));

    int lastNumber = 0;
    bool UserTurn = true;

    while (lastNumber < 31)
    {
        if (UserTurn)
        {
            cout << "����ڰ� �θ� ����!" << endl;
            lastNumber = getUser(lastNumber);
            cout << endl;
        }
        else
        {
            cout << "��ǻ�Ͱ� �θ� ����!" << endl;
            lastNumber = getComputer(lastNumber);
            cout << endl;
        }
        if (lastNumber >= 31) 
        {
            if (UserTurn) // ����ڰ� 31 ��������
            {
                cout << "���� ����! ��ǻ���� �¸��Դϴ�." << endl;
            } 
            else  // ��ǻ�� 31 ��������
            {
                cout << "���� ����! ������� �¸��Դϴ�." << endl;
            }
            break;
        }
    }


	return 0;
}