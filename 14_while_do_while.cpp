#include <iostream>

using namespace std;

int main() {
	// while(true Ȥ�� false) {......}
	string str = "radder";		// string�� �⺻������ null ���ڸ� ����

	int i = 0;
	while (str[i] != '\0') {	// '\0' : null ����
		cout << str[i] << endl;
		i++;
	}
// ======================================================================================
	// do while : ������ �� ���� ����, �� ���� ���� �˻�
	// �Ϲ� while ���� ���� ���� �˻�
	int j = 50;
	do {
		cout << "do while�� �̴�." << endl;
		j++;
	} while (j < 3);

	return 0;
}