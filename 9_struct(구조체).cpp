#include <iostream>

using namespace std;

int main() {
	// 구조체(복합데이터형) 
	// C++에서는 사용자의 정의대로 원하는 데이터형을 만들 수 있다.
	// (java의 class 개념과 비슷한 것 같다.)

	// 배열 : 같은 데이터형들의 집합
	// 구조체 : 다른 데이터형들이 허용되는 데이터의 집합

	// 구조체 선언
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
		// 위의 것들을 '멤버'라고 한다.
	} myStruct3, myStruct;

	// myStruct3, myStruct : 구조체(struct)를 정의하는 부분에서 {중괄호} 뒤에 해당 구조체(MyStruct)를 자료형으로서 사용할 변수명을 입력할 수 있다.
	// 이로 인해 해당 변수들(myStruct3, myStruct)을 사용할 때 별도의 구조체(struct) 자료형을 추가로 타이핑할 필요가 없다.
	// 쉼표(,)를 이용하여 여러개의 변수명을 지정할 수 있다.
// ============================================================================================================
	// 위에서 선언한 구조체를 일종의 자료형(데이터형)으로 사용하여 보자
	
	// 1.
	myStruct3 = {};
	// 배열과 마찬가지로 구조체 또한 모든 멤버들의 초기화 값을 모두 지정해줄 필요가 없다.
	// 이럴경우 초기화되지 않은 멤버들은 자료형에 따라 공백 혹은 0으로 저장된다.

	cout << myStruct3.name << endl;
	cout << myStruct3.position << endl;
	cout << myStruct3.height << endl;
	cout << myStruct3.weight << endl;

	cout << "=============================" << endl;
// ============================================================================================================
	// 2.
	myStruct = {
		// 구조체 초기화
		"Park",			// ==> 이렇게 간편하게 초기값을 입력할 수 있다.
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
	// 아래와 같은 방법으로도 구조체를 자료형(데이터형)으로 사용할 수 있다.
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
	// 구조체 배열 : 구조체 역시 배열로 선언할 수 있다.
	// JAVA의 객체 배열과 유사하다.
	MyStruct myStructArr[] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2},
	};

	// 구조체 배열의 각 원소에 접근하는 방법
	cout << myStructArr[0].name << endl;
	cout << myStructArr[1].name << endl;
	cout << myStructArr[0].weight << endl;
	cout << myStructArr[1].weight << endl;

	return 0;
}