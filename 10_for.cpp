#include <iostream>

using namespace std;

int main() {
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 0; i < 5; i++) {
		cout << i << "��° : " << a[i] << endl;
	}

	return 0;
}