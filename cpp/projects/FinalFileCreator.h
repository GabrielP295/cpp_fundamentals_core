#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class FinalFileCreator {
private:
	ofstream MyFile;
public:
	FinalFileCreator(string);
	void WriteFile(string, int, double, double);
	void WriteHeader();
	void CloseFile();
};

