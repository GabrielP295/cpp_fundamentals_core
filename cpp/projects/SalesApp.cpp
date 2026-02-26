#include <iostream>
#include <string>
#include "SalesAnalysis.h"
using namespace std;

int main() {
	string store;
	int numberOfMonths;
	double monthlySales;

	cout << "Sales Analysis\n";
	cout << "Enter the store name: ";
	getline(cin, store);
	cout << "How many months do you want to enter sales for? ";
	cin >> numberOfMonths;
	
	SalesAnalysis sales(store);
	for (int i = 1; i <= numberOfMonths; i++) {
		cout << "Enter the sales for month " << i << ": $";
		cin >> monthlySales;
		sales.AcumSales(monthlySales);
	}
	cout << "Total Sales: $" << sales.getTotalSales();
}