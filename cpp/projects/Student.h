#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
    string Name;
    double TotalGrade;

public:
    Student(string);
    string getLetterGrade(double);
    void AddGrade(double);
    double CalcAverage(int);
};

