#include "Student.h"

Student::Student(string studentName) {
    Name = studentName;
    TotalGrade = 0;
}

void Student::AddGrade(double grade) {
    TotalGrade += grade;
}

double Student::CalcAverage(int numberOfGrades) {
    return TotalGrade / numberOfGrades;
}

string Student::getLetterGrade(double average) {
    if (average >= 100.0) {
        return "A+";
    }
    else if (average >= 93.0) {
        return "A";
    }
    else if (average >= 90.0) {
        return "A-";
    }
    else if (average >= 87.0) {
        return "B+";
    }
    else if (average >= 83.0) {
        return "B";
    }
    else if (average >= 80.0) {
        return "B-";
    }
    else if (average >= 77.0) {
        return "C+";
    }
    else if (average >= 73.0) {
        return "C";
    }
    else if (average >= 70.0) {
        return "C-";
    }
    else if (average >= 67.0) {
        return "D+";
    }
    else if (average >= 63.0) {
        return "D";
    }
    else if (average >= 60.0) {
        return "D-";
    }
    else {
        return "F";
    }
}