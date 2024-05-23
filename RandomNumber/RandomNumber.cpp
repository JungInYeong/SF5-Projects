// 프로젝트 3 랜덤숫자 맞추기
#include<iostream>
#include<vector>
#include<ctime>
#include <cstdlib>
#include<algorithm>
using namespace std;

void Com_same(vector<int>& Com_Num)
{
    srand(time(NULL));
    while (Com_Num.size() < 6)
    {
       int num = rand() % 25 + 1;
       Com_Num.push_back(num);
        if (find(Com_Num.begin(), Com_Num.end(), num) == Com_Num.end())
        {
            Com_Num.push_back(num);
        }
    }
    cout << "----------------------------------" << endl;
    cout << "당첨번호 공개!" << endl;
    for (int n : Com_Num) {
        cout << n << " ";
    }
    cout << endl;
    cout << "1 ~ 7등까지 결과가 나올 수 있습니다." << endl;
}

int calcuteMachine(vector<int>& user_num, vector<int>& com_num)
{
    int count = 0;
    for (int num : user_num)
    {
        if (find(com_num.begin(), com_num.end(), num) != com_num.end())
        {
            count++;
        }
    }
    return count;
}

void checkRank(int count)
{
    switch (count)
    {
    case 6:
        cout << "결과 : 1등입니다!" << endl;
        break;
    case 5:
        cout << "결과 : 2등입니다!" << endl;
        break;
    case 4:
        cout << "결과 : 3등입니다!" << endl;
        break;
    case 3:
        cout << "결과 : 4등입니다!" << endl;
        break;
    case 2:
        cout << "결과 : 5등입니다!" << endl;
        break;
    case 1:
        cout << "결과 : 6등입니다!" << endl;
        break;
    case 0 :
        cout << "결과 : 7등입니다!" << endl;
    default:
        cout << "띠용 나오면 안됨" << endl;
        break;

    }
}

int main()
{
	
	vector<int>user_num;
	int User_Num;
	vector<int>com_num;
    int count;

	cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다." << endl;
	for (int i = 0; i < 6; i++)
	{
        while (true)
        {
            cout << i + 1 << "번째 번호를 입력하세요: ";
            cin >> User_Num;
            if (User_Num < 1 || User_Num > 25)
            {
                cout << "잘못된 숫자입니다. 다시 입력해주세요." << endl;
            }
            else if (find(user_num.begin(), user_num.end(), User_Num) != user_num.end())
            {
                cout << "이미 입력된 숫자입니다. 다시 입력해주세요." << endl;
            }
            else
            {
                user_num.push_back(User_Num);
                break;
            }
        }
		
	}
    Com_same(com_num);
    
    cout << endl;

    count = calcuteMachine(user_num, com_num);
    checkRank(count);

	return 0;
}