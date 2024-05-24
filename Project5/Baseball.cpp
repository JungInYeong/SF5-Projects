// 프로젝트 5 야구 게임
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std; 

class Baseball
{
public:
	vector<int> randNum; // 랜덤 숫자
	static int count;	// 사용자 횟수

	static int getCnt() { return count; }

	// strike 횟수
	int Strike(vector<int> numbers)
	{
		int strike = 0;
		for (int i = 0; i < 3; i++)
		{
			if (numbers[i] == randNum[i])
			{ 
				strike++; 
			}			
		}
		return strike;
	}

	//ball 횟수
	int Ball(vector<int> numbers)
	{
		int ball = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i != j && numbers[i] == randNum[j])
				{
					ball++;
				}
			}
		}
		return ball;
	}

	void random()
	{
		srand(time(NULL));
		while (randNum.size() < 3)
		{
			int num = rand() % 9 + 1;
			if (find(randNum.begin(), randNum.end(), num) == randNum.end())
			{
				randNum.push_back(num);
			}
		}
		
		//확인용
		cout << "난수 : ";
		for (int n : randNum)
		{
			cout << n << " ";
		}
		cout << endl;
	}
};

int Baseball::count = 0;

int main()
{
	int numIn;
	Baseball b;
	b.random();
	
	 
	while (1)
	{
		bool check = true;	
		vector<int> numbers;
		
		cout << "1 ~ 9 사이의 숫자 3개를 입력하시오.(이외의 숫자 : 종료)" << endl;
		for (int i = 0; i < 3; i++)
		{
			
			cin >> numIn;
			if (numIn < 1 || numIn > 9) 
			{
				check = false;
				
				continue;
			}

			numbers.push_back(numIn);
		}

		if (!check)
		{
			cout << "다시 입력해주세요!" << endl;
			continue;
			
		}


		b.count++;

		int strikes = b.Strike(numbers);
		int balls = b.Ball(numbers);

		if (strikes == 3)
		{
			cout << b.getCnt() << "번 만에 맞췄습니다." << endl;
			break;
		}
		cout << "Strike : " << strikes << "\t" << "Ball : " << balls << endl;
	}
	
	

	return 0;
}