#include <iostream>

using namespace std;

int main() {
	/*
	* ���� : ���� �� �ִ� ��
	* ====================================================================================================
	* �������� �˾ƾ� �� ��
	* 1. ������ �ڷ���
	* 2. ������ �̸�
	* 3. ������ ����Ǵ� ���(�޸� ����) --> �����Ϸ��� �˾Ƽ� ����
	* ====================================================================================================
	* ������ ��Ģ
	* 1. ���ڷ� ������ �� ����.
	* 2. C++���� ����ϰ� �ִ� Ű����� ����� �� ����.
	* 3. white space(����)�� ����� �� ����.
	*/

	int a; // ������ ����
	a = 7; // ������ ����

	int b = 3; // ����� ������ ���ÿ� --> �ʱ�ȭ

	// �翬�� ���Ҵ� ����
	a = 5;
	b = 10;

	cout << "a = " << + a << ", b = " << b << endl;
	cout << b << endl;

	// cf) ������ �ּҰ��� ���� ������ �Ʒ��� ���� �Ѵ�.
	// & --> �ּ� ������ �̿�
	cout << &a << ", " << &b << endl;

	/*
	* ������ ���Ǳ� ������ ���ǵž��Ѵ�.
	* int a;
	* a = 7;
	* ���� ���� ������ ������
	* 
	* a = 7;
	* int a;
	* �̷� ������ ������ ����� ���� ����.
	*/

	{	int b;
		{
		int a;
		b = 3;
		// int a�� ������ ����Ŭ�� �ش� ������ �ִ� {�߰�ȣ}���̴�.
		}
		a = 5; // �̰������� int a�� ����� �� ����.
	}

	return 0;
}