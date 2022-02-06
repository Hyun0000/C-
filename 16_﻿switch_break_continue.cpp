#include<iostream>

using namespace std;

int main() {
	// switch : C++�� switch �������� int�� char�� �����͸� ����� �� �ִ�.
	// ��, switch�� '�������� �������� �Ǵ�'�� �ϴ� ���̴�.
	int a;
	cin >> a;
	cout << "����� �Է°� : " << a << endl;

	switch (a)
	{
	case 1:
		cout << "�Է� ���� 1 �̴�." << endl;
		break;	// break�� ������ (case 2, case 3...)�� �ڵ���� ��� �����Ѵ�.
	case 2:
		cout << "�Է� ���� 2 �̴�." << endl;
		break;
	case 3:
		cout << "�Է� ���� 3 �̴�." << endl;
		break;
	default:
		cout << "�� �� �Է�" << endl;
		break;
	}

	char chr;
	cin >> chr;
	cout << "����� �Է°� : " << chr << endl;

	switch(chr)
	{
	case 'a':
		cout << "�Է� ���� a �̴�." << endl;
		break;
	default:
		cout << "�� �� �Է�" << endl;
		break;
	}
// ==========================================================================================
	// break
	int i = 0;
	while (true) {
		cout << "i�� ���� " << i << " �Դϴ�." << endl;
		if (i > 10) { 
			cout << "break ������ while�� �ı�, ���� " << endl;
			break;
		}
		i++;
	}
// ==========================================================================================
	// continue
	const int SIZE = 30;
	char line[SIZE];
	cin.get(line, SIZE);	// (����� �Է°��� ������ ����, ����� �Է°��� �ִ� ũ��)
	cout << "�Է��Ͻ� ������\n";
	int spaces = 0;
	cout << sizeof(line) / sizeof(char) << endl;

	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ') { continue; }
		
		spaces++;
	}

	cout << "�Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ�.\n";
	cout << "for�� ����";

	return 0;
}