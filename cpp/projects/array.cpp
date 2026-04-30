#include <iostream>
using namespace std;

/*
* arrays store data sequentially in memory
* they're fixed size and only hold a single data type
* When declared, its size is allocated to bits in memory
* So for example an array of 5 ints would be 20 bytes or 160 bits in memory sequentially
*/

int main() {
	int x[] = { 25, 22, 68, 90, 12 };
	int s = sizeof(x) / sizeof(int);
	cout << s << endl;

	for (int i = s - 1 ; i >= 0; i--) {
		cout << x[i] << endl;
	}
}