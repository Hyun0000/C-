#include <iostream>

using namespace std;

int main() {
	// 데이터형 변환
	
	// 1. 자동 형변환
	// C++는 아래와 같은 상황에서 '자동으로 데이터형을 변환'해준다.
	/*
	* 1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	* 2. 수식에 데이터형을 혼합하여 사용했을 때
	* 3. 함수에 매개변수를 전달할 때
	*/

	// 이중 1번을 자세히 알아보자
	int a = 3.141592;
	cout << a << endl;
	// 결과값 : 3

	cout << endl;

	// 2. 강제 형변환
	// 강제적으로 데이터형 변환
	// 변환 방법 : typeName(a) 혹은 (typeName)a
	// typeName : 바꿀 자료형 / a : 변수명
	char ch = 'M';
	// 위의 char형 변수를 int형으로 바꿔 출력해보자
	cout << ch << endl;
	cout << (int)ch << endl;
	cout << int(ch) << endl;
	// M
	// 77
	// 77

	cout << endl;

	// C++에서는 위의 방법 외에 조금 더 제한적인 데이터형 변환 연산자가 있다.
	// static_cast<typeName>  (typeName : 바꿀 자료형)
	// 해당 연산자는 강제 형변환과 동일하게 작동하지만 약간의 차이점이 있다.
	// 이것은 추후에 공부하도록 하자
	cout << static_cast<int>(ch) << endl;
	// 77
	return 0;
}