#include <iostream>

using namespace std;

int main() {
	// �迭(array) : ���� ���������� ����
	/*
	* typeName arrayName[arraySize];
	* �ڷ���   �迭��   [�迭ũ��];
	*/

	short month_one[12]; // �迭 ����

	// �迭�� �ʱ�ȭ(����� �Ҵ��� ���ÿ�)
	short month[12] = { 1, 2, 3 };
	cout << month << endl;
	cout << month[0] << endl;
	cout << month[1] << endl;
	cout << month[2] << endl;
	cout << month[3] << endl;
	cout << month[4] << endl;

	// ���ڿ� : ������ ��
	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	cout << a << endl;
	// ���� ���� null ����(\0)���� �־���߸� ���� ���ϴ� 'Hello'��� ���ڰ� ���������� ��µȴ�.
	// �ٵ� �̷��� �� �ٿ��� �Ʒ��� ���� �ϴ� ���� �� ����.

	char arr[] = "Hello";
	cout << arr << endl;
	// �迭�� ���̸� �ƿ� ������ �ʴ� ���̴�. & "ū ����ǥ"�� null ���ڸ� �����ϰ� �ִ�.
	return 0;
}