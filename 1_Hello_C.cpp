#include <iostream> // <iostream> : 전처리 지시자
/*
* C++에서 함수를 사용하고자 한다면 반드시 해당 함수의 '원형'을 미리 정의하여야한다.
* 원형이 정의되어 있지 않다면 함수를 사용 할 수 없다.
* cf) java의 import 개념과 비슷한 것 같다.
*/

 using namespace std;
/* 해당 코드를 주석처리하면 cout과 endl앞에 'std::'를 붙여줘야한다.
* ex) std::cout / std::endl
* why?
* cout과 endl은 <iostream>에 정의돼 있는 함수인데 이러한 함수들을 사용하기 위해서는 'std'라는 이름을 가지고 있어야하는 것이다.
* 근데 매번 'std::'를 붙일 수는 없으니 아예 위와같이 선언을 해버리는 것이다.
*/

// 아래의 모양이 C++의 함수이다.
 int main() {
	 /*
	 * C++ 코드에는 반드시 main이란 함수가 있어야한다.
	 * 자세히 말해 'main'이라는 이름을 가지고 있는 함수가 있어야한다.
	 * F5를 눌렀을 때 실행되는 함수가 main 함수이다.
	 */
	 cout << "Hello World!" << endl;
	 /*
	 * cout 함수를 사용하기 위해서 #include <iostream>을 선언한 것이다.(<iostream>에 cout 함수가 이미 정의)
	 * cout은 콘솔창에 문자를 출력하는 기능을 담당한다.
	 * =====================================================
	 * endl : 줄바꿈의 역할
	 * =====================================================
	 * << : 데이터의 흐름(방향)을 의미
	 * ex)
	 * cout << "Hello";
	 * cout << "Hello" : (Hello)라는 문자를 cout한테 출력하라고 하는 것
	 
	 * cout << "World" << endl;
	 * cout << "World" << endl : 줄을 바꿀건데 (World)라는 문자를 cout한테 출력하라고 하는 것
	 */
	 cout << "Hello";
	 cout << "World" << endl;
	 // 한 줄로 출력된다.

	 return 0;
	 // 얘도 반드시 있어야한다.
 }