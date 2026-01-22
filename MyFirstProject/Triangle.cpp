#include <iostream>
#include <cmath>
using namespace std;

double calcAreaOfTriangle(double base, double height);

int main() {
	double base;
	double height;
	while (true) {
		try {
			cout << "Enter the height of a triangle: ";
			cin >> height;
			cout << "Enter the base of a triangle: ";
			cin >> base;
			double area = calcAreaOfTriangle(base, height);
			cout << "Area of a triangle is: " << area << endl;
			break;
		}
		catch (invalid_argument& e) {
			cout << "Please input a valid value for base/height.\n" << endl;
		}
	}
}

double calcAreaOfTriangle(double base, double height) {
	if (base < 0 || height < 0) {
		throw invalid_argument("Base or height cannot be negative.");
	}
	return base * height * 0.5;
}