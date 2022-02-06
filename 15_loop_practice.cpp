#include <iostream>

using namespace std;

int main() {
	int a[5] = {1,3,5,7,9};

	// a 배열의 길이 출력
	// sizeof(int) : 현재 a가 int 배열이기에 (int)로 나누는 것이다.
	cout << sizeof(a) / sizeof(int) << endl;

	// 기존 for문
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

	// 배열기반 반복문(훨씬 간결)
	for (int i : a) {
		cout << i << endl;
	}
	// (int i : a) 설명
	// int i : 출력하고 싶은 배열의 데이터 형과 동일한 데이터 형의 카운터 선언
	// int i가 배열의 (index = 0) 부터 시작하여 배열의 각 '원소값'을 뽑아낸다.
	// a : 출력하고 싶은 배열의 이름 기입
// ====================================================================================
	// 중첩 루프 : 2차원 배열에서 많이 활용
	
	// 2차원 배열 선언 방법
	int temp[4][5] = 
	{
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555},
		{1111,2222,3333,4444,5555}
	};
	// temp라는 배열은 4개의 원소를 가지고 있으며 이 4개의 원소들은 각각 5개의 원소들을 가지고 있다.

	// 2차원 배열 출력
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << ", ";
		}
		cout << "\n";	// 개행(줄바꿈)
	}

	return 0;
}