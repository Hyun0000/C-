#include <iostream>

using namespace std;

int main() {
	/*
	* 
	* + : 더하기 / - : 빼기 / * : 곱하기
	* 
	* / : 나누기
	* 나눗셈은 두 피연산자가 모두 정수라면 정수 나눗셈을 수행하고 소숫점은 버린다.
	* 그러나 피연산자 중 하나라도 실수(부동 소수점)가 있으면 결과는 실수가 된다.
	* 
	* % : 나머지 ==> 부동 소수점(실수)을 사용할 수 없다.
	* 
	*/
	int a = 10;
	int b = 3;
	int cc = 5;

	// 실수 나눗셈
	float aa = 9.0;
	int bb = 5;
	cout << "aa : " << aa << endl;
	cout << "aa / bb : " << aa / bb << endl;


	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;
	int h = a + b * cc; // 당연히 사칙연산 순서대로 계산
	int i = a / b * cc; // 나눗셈 --> 곱셈 순서로 계산

	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;
	cout << "h : " << h << endl;
	cout << "i : " << i << endl;

	// auto : C++ 만의 데이터 형이다.
	// auto : 변수를 초기화(변수 선언과 할당을 동시에)할 때 데이터 형을 auto로 설정하면
	// C++가 초기화 하는 '값'을 보고 변수의 데이터형을 자동으로 결정하는 것이다.

	auto n = 100;		// n은 int
	auto x = 1.5;		// x는 float
	auto y = 1.3e12L;	// y는 long long 형으로 C++에서 자동으로 데이터형을 설정해준다.

	// 근데 이렇게 데이터형을 C++에게 임의로 맞기는 것은 좋지않다.
	// 복잡한 변수형을 다룰 때 auto를 유용하게 사용할 수 있다.
	return 0;
}