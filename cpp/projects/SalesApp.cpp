#include <iostream>
#include <string>
using namespace std;

int main() {
	string store;
	int numOfMonths;
	double monthlySales;
	double totalSales = 0;

	cout << "Best Buy Sales Analysis\n";
	cout << "========================\n";
	cout << "Enter the store name: ";
	getline(cin, store);
	cout << "How many months do you want to evaluate? ";
	cin >> numOfMonths;

	for (int i = 1; i <= numOfMonths; i++) {
		cout << "Enter Sales Month # " << i << ": ";
		cin >> monthlySales;
		totalSales += monthlySales;
	}

	cout << "Total Sales: " << totalSales;
}