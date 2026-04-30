#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string name;
	double grade;
	vector<string> studentNames;
	vector<vector<double>> studentGrades;

	for (int i = 1; i < 6; i++) {
		double gradeTotal = 0;
		vector<double> temp;
		cout << "Enter Student " << i << "'s name: ";
		getline(cin, name);
		studentNames.push_back(name);

		for (int j = 1; j < 6; j++) {
			cout << "Enter grade " << j << ": ";
			cin >> grade;
			gradeTotal += grade;
			temp.push_back(grade);
		}
		temp.push_back(gradeTotal / 5);
		studentGrades.push_back(temp);
		cin.ignore();
	}

	cout << "\nStudent\t\t" << "Grade 1\t" << "Grade 2\t" << "Grade 3\t" << "Grade 4\t" << "Grade 5\t" << "Average" << endl;
	for (int r = 0; r < 5; r++) {
		cout << studentNames[r] << "\t";
		for (int c = 0; c < 6; c++) {
			printf("%.2f\t", studentGrades[r][c]);
		}
		cout << endl;
	}
}