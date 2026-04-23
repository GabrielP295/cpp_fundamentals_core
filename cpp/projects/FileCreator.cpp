#include "FileCreator.h"

FileCreator::FileCreator(string FileName) {
	this->MyFile.open(FileName + ".csv");
}

void FileCreator::WriteFile(string StoreName, double JanSales, double FebSales, double MarSales, double AprSales) {
	double totalSales = JanSales + FebSales + MarSales + AprSales;
	this->MyFile << StoreName + ", " << JanSales << ", " << FebSales << ", " << MarSales << ", " << AprSales << ", " << totalSales;
}

void FileCreator::WriteHeader() {
	this->MyFile << "Store, January, February, March, April, Total";
}

void FileCreator::CloseFile() {
	this->MyFile.close();
}