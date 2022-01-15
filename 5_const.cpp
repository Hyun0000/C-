#include <iostream>

using namespace std;

int main() {
	// 원의 넓이를 구하는 프로그램을 만들어보자
	// 원의 넓이 = 반지름 * 반지름 * 파이

	/*
	* 프로그램에서 변수와 다르게 바뀔 필요가 없는 수, 바뀌어서는 안 되는 수를
	* '상수' 개념으로 관리한다.
	* C++에서는 const라는 '제한자'를 이용해 상수를 선언한다.
	*/
	const float PIE = 3.1415926535;
	// const선언 / 상수의 자료형(변수형) 선언 / 상수 변수명 선언 / 값 할당

	// 상수변수의 값을 일반변수와 같이 아래처럼 재할당 할수는 없다.
	// PIE = 10;
	// 상수변수는 선언과 할당을 동시에 하는 '초기화' 방식으로만 변수를 사용할 수 있다.
	/*
	* 아래의 방법은 안 된다.
	* const float PIE;
	* PIE = 3.1415926535;
	* 
	* 이렇게 선언과 할당을 동시에 해줘야한다.
	* const float PIE = 3.1415926535;
	*/

	// 반지름
	int r = 3;

	// 원의 넓이
	float s = r * r * PIE;

	// 반지름
	int r2 = 6;

	// 원의 넓이
	float s2 = r2 * r2 * PIE;

	cout << s << endl;
	cout << s2 << endl;

	return 0;
}