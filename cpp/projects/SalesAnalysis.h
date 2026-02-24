#pragma once
#include <string>
#include <iostream>
using namespace std;

class SalesAnalysis
{
private:
	string store;
	double totalSales;
public:
	SalesAnalysis(string);
	void AcumSales(double);
	double getTotalSales();
	double getAverage(int);
	string getStore();
};

