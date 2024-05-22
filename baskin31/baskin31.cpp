#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int getComputer(int lastNumber)
{
	int numCount = (rand() % 2) + 1;        
    cout << "컴퓨터가 부른 숫자!" << endl;
	for (int i = 0; i <= numCount; ++i)
	{
       
		cout << lastNumber + i << endl;

	}
	cout << endl;

	return lastNumber + numCount;
}

int getUser(int lastNumber) 
{
    int numCount = -1;

    while (numCount < 1 || numCount > 3)
    {
        cout << "몇 개의 숫자를 말하시겠습니까? (1-3): ";
        cin >> numCount;

        // 범위 벗어난 값이 입력되면 경고 메시지 출력
        if (numCount < 1 || numCount > 3) 
        {
            cout << "1~3 사이의 수를 입력하세요." << endl;
            cin.clear(); // 스트림 플래그를 초기화.
        }
    }
    cout << "사용자가 부른 숫자!" << endl;
    for (int i = 1; i <= numCount; ++i)
    {
       
        cout << lastNumber + i << endl;
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
            lastNumber = getUser(lastNumber);
            cout << endl;
            
            lastNumber = getComputer(lastNumber);

            
        }
        
        if (lastNumber >= 31)
        {
            if (UserTurn)
            {
                cout << "게임 종료! 사용자의 승리입니다." << endl;
            } 
            else
            {
                cout << "게임 종료! 컴퓨터의 승리입니다." << endl;
            }
            break;
        }
    }


	return 0;
}