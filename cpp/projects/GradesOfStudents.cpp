#include <iostream>
#include <string>
using namespace std;

int main() {
	string students[5];
	double grades[5][6];

	for (int r = 0; r < 5; r++) {
		string name = "";
		double gradeTotal = 0;
		cout << "Enter Student " << r + 1 << "'s name: ";
		getline(cin, name);
		students[r] = name;
		for (int c = 0; c < 5; c++) {
			double grade;
			cout << "Enter grade " << c + 1 << ": ";
			cin >> grade;
			grades[r][c] = grade;
			gradeTotal += grade;
		}
		grades[r][5] = gradeTotal / 5;
		cin.ignore();
	}

	cout << "\nStudent\t\t" << "Grade 1\t" << "Grade 2\t" << "Grade 3\t" << "Grade 4\t" << "Grade 5\t" << "Average" << endl;
	for (int r = 0; r < 5; r++) {
		cout << students[r] << "\t";
		for (int c = 0; c < 6; c++) {
			printf("%.2f\t", grades[r][c]);
		}
		cout << endl;
	}
}