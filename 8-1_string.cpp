#include <iostream>

using namespace std;

int main() {
	// C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	/*
	* C ��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
	* ex) java���� String name = "kim"; �� ���� ���
	* cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	* cout�� ����Ͽ� string ��ü�� ���÷���(���)�� �� �ִ�.
	* �迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
	*/

	// string������ �迭�� �ٸ� �迭�� ��°�� ������ �� �ִ�.
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	// char1 = char2; // Ʋ����.
	str1 = str2; // �´�.

	cout << str1 << endl;
	cout << str2 << endl;

	cout << str1[0] << endl;
	cout << str1[1] << endl;
	return 0;
}

