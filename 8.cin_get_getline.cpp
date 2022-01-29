#include <iostream>
#include <cstring>							// strlen() 사용을 위해 include

using namespace std;

int main()
{
	const int Size = 15;					// 상수(by const)를 이용해 배열의 사이즈를 명시
	char name1[Size];						// 비어있는 배열
	char name2[Size] = "C++programing";		// 문자열 상수로 초기화된 배열

	cout << "안녕하세요 저는" << name2;
	cout << "입니다! 성함이 어떻게 되시나요?\n";

	// cin >> name1;
	// cin : 사용자가 입력한 값을 name1에 저장해준다.
	// 데이터의 흐름(>>)을 잘 볼 것

	// 하지만 cin은 공백이 들어간 문자 전체를 받지 못한다.(공백 이전의 문자열만 입력받는 것이다.)
	// 공백을 만나면 문자열이 끝났다고 인식을 하는 것이다.
	// ex) (radder nepa)라고 입력하면 radder라는 문자만 입력받는다.

	// 공백을 포함한 사용자의 입력값을 받는 방법 : get / getline
	// 1. getline
	// cin.getline(name1, Size);
	// (name1, Size) : (사용자 입력값을 저장할 변수, 사용자 입력값의 최대 크기)

	// 2. get
	cin.get(name1, Size);
	// (name1, Size) : (사용자 입력값을 저장할 변수, 사용자 입력값의 최대 크기)

	// 기본적으로 get과 getline은 동일한 방식으로 작동한다.

	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << " 자 입니다만\n";								// strlen() : 문자열의 길이를 반환하는 함수
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";		// sizeof() : 변수의 byte 크기를 반환하는 함수
	cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";

	name2[3] = '\0';
	// set to null character
	// 입력한 값의 처음 3글자만 출력하기 위해 네번째 자리의 값을 null 문자로 저장
	// cout이 문자를 출력할 때 null 문자까지만 출력하는 속성을 이용한 것이다.

	cout << "제 이름의 처음 세 문자는 다음과 같습니다. : ";
	cout << name2 << endl;

	return 0;
}