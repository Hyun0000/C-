#include<iostream>

using namespace std;

int main() {
	// switch : C++의 switch 문에서는 int와 char형 데이터만 사용할 수 있다.
	// 즉, switch는 '정수값을 기준으로 판단'을 하는 것이다.
	int a;
	cin >> a;
	cout << "사용자 입력값 : " << a << endl;

	switch (a)
	{
	case 1:
		cout << "입력 값은 1 이다." << endl;
		break;	// break가 없으면 (case 2, case 3...)의 코드까지 모두 동작한다.
	case 2:
		cout << "입력 값은 2 이다." << endl;
		break;
	case 3:
		cout << "입력 값은 3 이다." << endl;
		break;
	default:
		cout << "그 외 입력" << endl;
		break;
	}

	char chr;
	cin >> chr;
	cout << "사용자 입력값 : " << chr << endl;

	switch(chr)
	{
	case 'a':
		cout << "입력 값은 a 이다." << endl;
		break;
	default:
		cout << "그 외 입력" << endl;
		break;
	}
// ==========================================================================================
	// break
	int i = 0;
	while (true) {
		cout << "i의 값은 " << i << " 입니다." << endl;
		if (i > 10) { 
			cout << "break 만나서 while문 파괴, 종료 " << endl;
			break;
		}
		i++;
	}
// ==========================================================================================
	// continue
	const int SIZE = 30;
	char line[SIZE];
	cin.get(line, SIZE);	// (사용자 입력값을 저장할 변수, 사용자 입력값의 최대 크기)
	cout << "입력하신 문장은\n";
	int spaces = 0;
	cout << sizeof(line) / sizeof(char) << endl;

	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ') { continue; }
		
		spaces++;
	}

	cout << "입니다.\n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다.\n";
	cout << "for문 종료";

	return 0;
}