#include <iostream>

using namespace std;

int main() {
	// while(true 혹은 false) {......}
	string str = "radder";		// string은 기본적으로 null 문자를 포함

	int i = 0;
	while (str[i] != '\0') {	// '\0' : null 문자
		cout << str[i] << endl;
		i++;
	}
// ======================================================================================
	// do while : 무조건 한 번은 실행, 그 다음 조건 검사
	// 일반 while 문은 조건 먼저 검사
	int j = 50;
	do {
		cout << "do while문 이다." << endl;
		j++;
	} while (j < 3);

	return 0;
}