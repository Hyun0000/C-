#include <iostream>

using namespace std;

int main() {
	// 증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;
	cout << "a++ : " << a++ << endl; // 10(a를 먼저 사용한 후 증가), 현재 a에는 11이 저장
	cout << "a : " << a << endl;
	cout << "++b : " << ++b << endl; // 11(b를 먼저 증가 시킨 후 사용)

	// 관계 표현식 : 부등호로 표현한 식을 관계 표현식이라고 한다.
	/*
	* 
	* <
	* <=
	* >
	* >=
	* ==
	* !=
	* 
	*/

	return 0;
}
