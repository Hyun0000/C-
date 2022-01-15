#include <iostream>

using namespace std;

int main() {
	/*
	* char : 작은 문자형을 표현할 때 사용
	* 작은 문자 = java와 동일하게 '한 글자'라고 생각하면 된다.
	*/
	int a = 77;
	char b = a;
	cout << a << endl; // 77
	cout << b << endl; // M --> 아스키 코드 상에서 M이 77과 대응되기 때문에 M이 출력됐다.

	char c = 'a'; // C++에서 char는 작은 따옴표로 감싸야한다.
	cout << c << endl;
	/*
	* 왜 C++에서 char는 '작은 따옴표'로 감싸야 할까?
	* null 문자 때문이다.
	* C++에서 문자를 출력하고자 할때 결국 문자는 정수로 저장된다.(아스키 코드)
	* C++에서 '문자열'을 출력할때 어디서 부터 어디까지가 문자인지 확인할 필요가 있다.
	* 
	* (char c = 'a') 같은 경우에는 한 글자만 출력하면 되기에 'a'만 출력하고 프로그램이 종료된다.
	* 그러나 아래와 같은 경우라면 출력이 이상하게 된다.
	*/

	char arr[] = { 'a', 'b', 'c' };
	cout << arr << endl;
	/*
	* 위의 코드를 출력하면 abc뒤에 원하지 않는 값도 출력된다.
	* 출력값 : abc儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆?릏놝
	* 이는 어디까지가 문자인지를 알려주는 null 문자가 없기 때문이다.
	* 계속 메모리를 돌면서 이상한 문자를 출력하다가 우연하게 null문자를 만나 그제서야 출력을 종료한 것이다.
	* 
	* 따라서 null 문자를 입력해주어야 정상출력이 된다.
	* null 문자 = '\0'
	*/

	cout << endl;
	char arrs[] = { 'a', 'b', 'c', '\0'};
	cout << arrs << endl;
	// 출력값 : abc
	// null문자로 인해 C++가 출력해야하는 범위를 인지할 수 있는 것이다.

	// "큰 따옴표"는 이러한 null문자를 명시적으로 포함하고 있다.
	// string 변수형에서 "큰 따옴표"를 사용한다.
	
	// 그렇기에 char b = "a"가 오류가 나는 이유는
	// "큰 따옴표"의 특징으로 인해 (char b = "a")는 사실상 char b = "a\0"가 되는 것이고
	// char가 '두 글자를 가지는 변수의 자료형'이 되기에 오류가 나는 것이다.

	// cf)
	// 한글은 아스키코드에서 지원해주지 않는다. 유니코드를 사용해야 한다.
	// char로 한글을 사용할 수 없다는 의미
	char sd = '한';
	string ssd = "한";
	cout << sd << endl;
	cout << ssd << endl;
	// ========================================================================
	// bool : 0(false) 혹은 1(true)로만 저장
	// bool 타입은 숫자를 (0 혹은 1)만 저장, '0 이외의 모든 수는 다 1로 저장'된다.
	bool aa = 0;
	bool bb = 1;
	bool cc = 10;
	cout << aa << " " << bb << " " << cc << endl; // [결과값] : 0 1 1


	return 0;
}