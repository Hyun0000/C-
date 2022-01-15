#include <iostream>
#include <climits>

using namespace std;

int main() {
	/*
	* ������ : �Ҽ��ΰ� ���� ���μ� (���� ���� / 0 / ���� ����)�� �ǹ�
	* short, int, long, long long ��� (���� ���� / 0 / ���� ����)�� ������ �� �ִ� ������ �������̴�.
	* �� 4���� �ڷ����� ���� ǥ���� �� �ִ� ���� ũ�Ⱑ �ٸ���.
	* (short --> int --> long --> long long) ������ ũ�Ⱑ ũ��.
	*/
	int n_int = INT_MAX;			// INT_MAX : int �ڷ����� �ִ� ũ��
	short n_short = SHRT_MAX;		// SHRT_MAX : short �ڷ����� �ִ� ũ��
	long n_long = LONG_MAX;			// LONG_MAX : long �ڷ����� �ִ� ũ��
	long long nllong = LLONG_MAX;	// LLONG_MAX : long long �ڷ����� �ִ� ũ��
	// ���� ������ ���(�빮��)�̱⿡ ���� ������ �ʴ´�.

	cout << "int�� " << sizeof n_int << " ����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪��  " << n_int << " �̴�." << endl;
	cout << endl;

	cout << "short�� " << sizeof n_short << " ����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪��  " << n_short << " �̴�." << endl;
	cout << endl;

	cout << "long�� " << sizeof n_long << " ����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪��  " << n_long << " �̴�." << endl;
	cout << endl;

	cout << "long long�� " << sizeof nllong << " ����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪��  " << nllong << " �̴�." << endl;

	unsigned int a;
	unsigned short b;
	unsigned long c;
	unsigned long long d;
	/*
	* unsigned�� �ڷ��� �տ� Ű����μ� �ٰ� �Ǹ� ���� ���� ������ �� ����.(= ������ �ʿ䰡 ����.)
	* �̷����� �������� ������ �� �ִ� '�ִ밪�� �ø� �� �ִ�.'
	* ex)
	* unsigned�� ���� ���� short�� ������ �ִ밪�� 32767������
	* unsigned�� ���� short�� ������ ������ (0 ~ 65535)�̴�.
	* (-32768 ~ -1)��ŭ�� �޸� ������ ���� ������ ������ ���̶�� �����ϸ� �ȴ�.
	* 
	* unsigned short b = -1;
	* cout << b;
	* �� ���� 65535�� ��µȴ�.
	* -1�� unsigned�� ���� ���� �����Ǵ� ������ �ƴϹǷ� �� �ݴ������� �Ѿ
	* �ٽ� �����ϴ� ���̶�� �����ϸ� �ȴ�.
	* 
	* unsigned short b = -2;
	* cout << b;
	* �� ���� 65534�� ��µȴ�.
	* 
	* �̷��� ���� ��� short���� �ƴ϶� �⺻ �������� int, long, long long ���Ե� ��� ����ȴ�.
	*/

	b = -2;

	cout << endl;
	cout << b << endl;
	cout << endl;

	// ==========================================================================================
	// �Ǽ��� : �Ҽ��ΰ� �ִ� �� 
	float a_float = 3.14;
	int b_float = 3.14;

	cout << a_float << endl;
	cout << b_float << endl;
	// 3.14
	// 3 (�Ҽ��ΰ� ������ �� �����θ� ��µȴ�.)

	return 0;
}