#include <iostream>

int main() {
	std::cout << "For loop sample: " << std::endl;
	for (int i = 1; i <= 12; i++) {
		int product = 5 * i;
		std::cout << "5 x " << i << " = " << product << std::endl;
	}

	std::cout << "While loop sample: " << std::endl;
	int c = 0;
	while (c <= 10) {
		std::cout << c++ << std::endl;
	}

	std::cout << "Do while loop sample: " << std::endl;
	int d = 20;
	do {
		std::cout << d << std::endl;
	} while (d <= 10);
}