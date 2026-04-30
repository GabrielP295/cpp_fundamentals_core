#include "FinalFileCreator.h"
#include <vector>

int main() {
	string fileName;
	cout << "Enter the file name: ";
	getline(cin, fileName);

	FinalFileCreator employeesCsv = FinalFileCreator(fileName);
	employeesCsv.WriteHeader();

	for (int i = 1; i <= 5; i++) {
		string employeeName;
		int hoursWorked;
		double payRate;
		cout << "Enter employee's #" << i << "'s name: ";
		getline(cin, employeeName);
		cout << "Enter hours worked: ";
		cin >> hoursWorked;
		cout << "Enter pay rate: ";
		cin >> payRate;
		cin.ignore();
		double payment = payRate * hoursWorked;

		employeesCsv.WriteFile(employeeName, hoursWorked, payRate, payment);
	}

	employeesCsv.CloseFile();
}