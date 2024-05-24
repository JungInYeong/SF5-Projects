// 프로젝트 2 타임어택 끝말잇기 게임
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void SaveWord(vector<string>save_word) // 입력 저장된 문자열 출력
{
	for (int i = 0; i < save_word.size(); i++)
	{
		cout << save_word[i] << " -> ";
		
	}
	cout << endl;
}

int main()
{

	vector<string> save_Word = { "airplane" };
	double Time = 0;
	string next_Word;
	int n = next_Word.size();
	clock_t startTime = clock();

	cout << save_Word.front() << endl;

	while (Time <= 30)
	{
		cout << "다음 단어를 입력하세요 : ";
		cin >> next_Word;
		// 중복 단어 검사
		if (find(save_Word.begin(), save_Word.end(), next_Word) != save_Word.end())
		{
			cout << "중복된 단어입니다." << endl << endl;
			continue;
		}
		clock_t endTime = clock();
		Time = (endTime - startTime) / CLOCKS_PER_SEC;
		save_Word.push_back(next_Word);
		cout << endl;
		SaveWord(save_Word);
		
	}
	
	cout << "타임 오버!" << endl << endl;
	cout << "게임 종료!" << endl;
	cout << "총 입력한 단어 개수 : " << save_Word.size() << endl;

	return 0;
}