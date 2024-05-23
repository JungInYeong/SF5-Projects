// 프로젝트 4 마방진 = n*(n^2 + 1) / 2
#include <iostream>
using namespace std;
//row 행, col 열

//홀수 마방진

int main()
{
	int arr[][]{ 0 };
	int n, count = 0;

	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요 : ";
	cin >> n;

	int row = 0, col = n / 2; // 첫 행 열은 가운데

	for (int i = 0; i < n * n; i++)
	{
		count++;

		// 행이
	}


	return 0;
}