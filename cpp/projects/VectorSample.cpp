#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> temp;
	vector<vector<int>> numbers;
	int rows = 5;
	int col = 5;
	int num;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < col; c++) {
			cout << "Enter numbers[" << r << "][" << c << "] ==> ";
			cin >> num;
			temp.push_back(num);
		}
		numbers.push_back(temp);
		temp.clear();
		cout << endl;
	}

	for (int r = 0; r < numbers.size(); r++) {
		for (int c = 0; c < numbers[r].size(); c++) {
			cout << numbers[r][c] << "\t";
		}
		cout << endl;
	}
}