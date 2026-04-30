#include "FinalFileCreator.h"

FinalFileCreator::FinalFileCreator(string FileName) {
	this->MyFile.open(FileName + ".csv");
}

void FinalFileCreator::WriteFile(string employeeName, int hoursWorked, double payRate, double payment) {
	this->MyFile << employeeName + ", " << hoursWorked << ", " << payRate << ", " << payment << endl;
}

void FinalFileCreator::WriteHeader() {
	this->MyFile << "EmployeeName, HoursWorked, PayRate, Payment\n";
}

void FinalFileCreator::CloseFile() {
	this->MyFile.close();
}