#include "SalesAnalysis.h"

SalesAnalysis::SalesAnalysis(string store) {
	this->store = store;
	this->totalSales = 0;
}

void SalesAnalysis::AcumSales(double sales) {
	this->totalSales += sales;
}

double SalesAnalysis::getTotalSales() {
	return this->totalSales;
}

double SalesAnalysis::getAverage(int numOfMonths) {
	return this->totalSales / numOfMonths;
}

string SalesAnalysis::getStore() {
	return this->store;
}