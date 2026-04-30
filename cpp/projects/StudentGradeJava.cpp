#include "Student.h"
using namespace std;

int main() {
    string studentName, letterGrade;
    int numberOfGrades, counter = 1;
    double grade, average;

    cout << "Enter student name: ";
    getline(cin, studentName);

    Student student = Student(studentName);

    cout << "Enter number of grades: ";
    cin >> numberOfGrades;

    while (numberOfGrades <= 0) {
        cout << "Can't have negative number of grades. Enter a number greater than 0: ";
        cin >> numberOfGrades;
    }

    while (counter <= numberOfGrades) {
        cout << "Enter a grade: ";
        cin >> grade;
        student.AddGrade(grade);
        counter++;
    }

    average = student.CalcAverage(numberOfGrades);
    letterGrade = student.getLetterGrade(average);

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Final Grade: " << average << "%" << endl;
    cout << "Letter Grade: " << letterGrade << endl;
};