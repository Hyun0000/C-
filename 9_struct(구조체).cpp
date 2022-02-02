#include <iostream>

using namespace std;

int main() {
	// ����ü(���յ�������) 
	// C++������ ������� ���Ǵ�� ���ϴ� ���������� ���� �� �ִ�.
	// (java�� class ����� ����� �� ����.)

	// �迭 : ���� ������������ ����
	// ����ü : �ٸ� ������������ ���Ǵ� �������� ����

	// ����ü ����
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
		// ���� �͵��� '���'��� �Ѵ�.
	} myStruct3, myStruct;

	// myStruct3, myStruct : ����ü(struct)�� �����ϴ� �κп��� {�߰�ȣ} �ڿ� �ش� ����ü(MyStruct)�� �ڷ������μ� ����� �������� �Է��� �� �ִ�.
	// �̷� ���� �ش� ������(myStruct3, myStruct)�� ����� �� ������ ����ü(struct) �ڷ����� �߰��� Ÿ������ �ʿ䰡 ����.
	// ��ǥ(,)�� �̿��Ͽ� �������� �������� ������ �� �ִ�.
// ============================================================================================================
	// ������ ������ ����ü�� ������ �ڷ���(��������)���� ����Ͽ� ����
	
	// 1.
	myStruct3 = {};
	// �迭�� ���������� ����ü ���� ��� ������� �ʱ�ȭ ���� ��� �������� �ʿ䰡 ����.
	// �̷���� �ʱ�ȭ���� ���� ������� �ڷ����� ���� ���� Ȥ�� 0���� ����ȴ�.

	cout << myStruct3.name << endl;
	cout << myStruct3.position << endl;
	cout << myStruct3.height << endl;
	cout << myStruct3.weight << endl;

	cout << "=============================" << endl;
// ============================================================================================================
	// 2.
	myStruct = {
		// ����ü �ʱ�ȭ
		"Park",			// ==> �̷��� �����ϰ� �ʱⰪ�� �Է��� �� �ִ�.
		"Striker",
		179,
		76
	};

	cout << myStruct.name << endl;
	cout << myStruct.position << endl;
	cout << myStruct.height << endl;
	cout << myStruct.weight << endl;

	cout << "=============================" << endl;
// ============================================================================================================
	// �Ʒ��� ���� ������ε� ����ü�� �ڷ���(��������)���� ����� �� �ִ�.
	MyStruct myStruct2;

	myStruct2.name = "Son";
	myStruct2.position = "Striker";
	myStruct2.height = 183;
	myStruct2.weight = 77;

	cout << myStruct2.name << endl;
	cout << myStruct2.position << endl;
	cout << myStruct2.height << endl;
	cout << myStruct2.weight << endl;

	cout << "=============================" << endl;
// ============================================================================================================
	// ����ü �迭 : ����ü ���� �迭�� ������ �� �ִ�.
	// JAVA�� ��ü �迭�� �����ϴ�.
	MyStruct myStructArr[] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2},
	};

	// ����ü �迭�� �� ���ҿ� �����ϴ� ���
	cout << myStructArr[0].name << endl;
	cout << myStructArr[1].name << endl;
	cout << myStructArr[0].weight << endl;
	cout << myStructArr[1].weight << endl;

	return 0;
}