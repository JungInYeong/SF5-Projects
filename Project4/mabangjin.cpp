// 프로젝트 4 마방진 = n*(n^2 + 1) / 2
#include <iostream>
#include <vector>
using namespace std;
//row 행, col 열

//홀수 마방진

int main()
{
	int n, count = 0;
	int row, col = 0;
	int i = 0, j = 0;

	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요 : ";
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(n, 0));

	// arr 초기화할 때, 크기가 n인 벡터 n개 포함하는 벡터 생성
	// vector<int>(n,0)은 크기가 n이고 모든 요소가 0으로 초기화된 벡터
	// arr(n,vector<int>(n,0)은 벡터가 n개있는 2차원 벡터 생성
	// arr은 nxn 크기의 2차원 벡터


	// 출력하여 확인
	/*for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/


	// cout << arr.size() << " " << arr[0].size() << endl;

	row = 0, col = n / 2, arr[row][col] = 1; // 열 가운데 설정 1대입

	for ( i = 2; i <= (arr.size() * arr[0].size()); i++)
	{
		// cout << arr.size() << " " << arr[0].size() << " " << i << endl; i가 2부터 안올라감 ? 왜그러냐? i = arr[row][col] 해서 그렇다.

		row--;
		col--;
		if (row < 0)
		{	// 만약 칸이 없으면 그 너머의 칸인 반대칸 숫자 대입
			row = n - 1;
		}
		if (col < 0)
		{
			col = n - 1;
		}
		if (arr[row][col] != 0)
		{	// 대각선 칸에 숫자가 있다면 아래로
			row++;
		}
		arr[row][col] = i;
	}


	for (int i = 0; i < arr.size(); ++i) {
		for (int j = 0; j < arr[0].size(); ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

/*
1은 무조건 첫 번째 행 가운데
그 다음 숫자는 바로 전 숫자의 윗행, 다음 열에 채움 (row-1)(col+1)
근데 자리 없음
열(col)만 1증가시키고 행(row)는 n으로 보내줌
그다음 열도 문제
윗행(row+1), 처음 열(col=0)으로 보내줌 그 다음 위 대각선에 숫자가 있으면
아래로 내려주면 됨 (row-1)(col)
*/