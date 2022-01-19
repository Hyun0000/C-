#include <iostream>

using namespace std;

int main() {
	// 배열(array) : 같은 데이터형의 집합
	/*
	* typeName arrayName[arraySize];
	* 자료형   배열명   [배열크기];
	*/

	short month_one[12]; // 배열 선언

	// 배열의 초기화(선언과 할당을 동시에)
	short month[12] = { 1, 2, 3 };
	cout << month << endl;
	cout << month[0] << endl;
	cout << month[1] << endl;
	cout << month[2] << endl;
	cout << month[3] << endl;
	cout << month[4] << endl;

	// 문자열 : 문자의 열
	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	cout << a << endl;
	// 위와 같이 null 문자(\0)까지 넣어줘야만 내가 원하는 'Hello'라는 글자가 정상적으로 출력된다.
	// 근데 이렇게 할 바에는 아래와 같이 하는 것이 더 좋다.

	char arr[] = "Hello";
	cout << arr << endl;
	// 배열의 길이를 아예 정하지 않는 것이다. & "큰 따옴표"는 null 문자를 포함하고 있다.
	return 0;
}