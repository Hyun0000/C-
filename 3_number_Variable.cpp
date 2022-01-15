#include <iostream>
#include <climits>

using namespace std;

int main() {
	/*
	* 정수형 : 소수부가 없는 수로서 (음의 정수 / 0 / 양의 정수)를 의미
	* short, int, long, long long 모두 (음의 정수 / 0 / 양의 정수)를 저장할 수 있는 정수형 데이터이다.
	* 위 4가지 자료형은 각각 표현할 수 있는 수의 크기가 다르다.
	* (short --> int --> long --> long long) 순으로 크기가 크다.
	*/
	int n_int = INT_MAX;			// INT_MAX : int 자료형의 최대 크기
	short n_short = SHRT_MAX;		// SHRT_MAX : short 자료형의 최대 크기
	long n_long = LONG_MAX;			// LONG_MAX : long 자료형의 최대 크기
	long long nllong = LLONG_MAX;	// LLONG_MAX : long long 자료형의 최대 크기
	// 위의 값들은 상수(대문자)이기에 값이 변하지 않는다.

	cout << "int는 " << sizeof n_int << " 바이트이다." << endl;
	cout << "이 바이트의 최대값은  " << n_int << " 이다." << endl;
	cout << endl;

	cout << "short은 " << sizeof n_short << " 바이트이다." << endl;
	cout << "이 바이트의 최대값은  " << n_short << " 이다." << endl;
	cout << endl;

	cout << "long은 " << sizeof n_long << " 바이트이다." << endl;
	cout << "이 바이트의 최대값은  " << n_long << " 이다." << endl;
	cout << endl;

	cout << "long long은 " << sizeof nllong << " 바이트이다." << endl;
	cout << "이 바이트의 최대값은  " << nllong << " 이다." << endl;

	unsigned int a;
	unsigned short b;
	unsigned long c;
	unsigned long long d;
	/*
	* unsigned가 자료형 앞에 키워드로서 붙게 되면 음의 값을 저장할 수 없다.(= 저장할 필요가 없다.)
	* 이로인해 변수형이 저장할 수 있는 '최대값을 늘릴 수 있다.'
	* ex)
	* unsigned가 붙지 않은 short형 변수의 최대값은 32767이지만
	* unsigned가 붙은 short형 변수의 범위는 (0 ~ 65535)이다.
	* (-32768 ~ -1)만큼의 메모리 영역을 양의 영역에 더해준 것이라고 생각하면 된다.
	* 
	* unsigned short b = -1;
	* cout << b;
	* 의 값은 65535가 출력된다.
	* -1은 unsigned로 인해 현재 지원되는 범위가 아니므로 그 반대편으로 넘어가
	* 다시 시작하는 것이라고 생각하면 된다.
	* 
	* unsigned short b = -2;
	* cout << b;
	* 의 값은 65534가 출력된다.
	* 
	* 이러한 점은 비단 short만이 아니라 기본 정수형인 int, long, long long 에게도 모두 적용된다.
	*/

	b = -2;

	cout << endl;
	cout << b << endl;
	cout << endl;

	// ==========================================================================================
	// 실수형 : 소수부가 있는 수 
	float a_float = 3.14;
	int b_float = 3.14;

	cout << a_float << endl;
	cout << b_float << endl;
	// 3.14
	// 3 (소수부가 버려진 후 정수부만 출력된다.)

	return 0;
}