#include <iostream>
#include <string>
using namespace std;

int main() {
	string city;
	string cities[5];
	int cityNumber = 1;
	
	while (cityNumber <= 5) {
		cout << "Enter city # " << cityNumber << " ==> ";
		getline(cin, city);
		cities[cityNumber - 1] = city;
		cityNumber++;
	}
	
	cout << "\nThe Entry Cities backwards\n\n";
	int cityNumberBackwards = 5;
	while (cityNumberBackwards >= 1) {
		cout << "City # " << cityNumberBackwards << " ==> " << cities[cityNumberBackwards - 1] << endl;
		cityNumberBackwards--;
	}
}