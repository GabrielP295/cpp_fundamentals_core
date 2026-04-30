#include "FileCreator.h"
#include <vector>

int main() {
	string fileName;
	cout << "Enter the file name: ";
	getline(cin, fileName);

	FileCreator storeSalesCsv = FileCreator(fileName);
	storeSalesCsv.WriteHeader();

	for (int i = 1; i <= 5; i++) {
		string storeName;
		vector<double> storeSales;
		cout << "Enter store name " << i << ": ";
		getline(cin, storeName);

		for (int j = 0; j < 4; j++) {
			double storeSale;
			vector<string> monthNames = { "January", "February", "March", "April" };
			cout << "Enter store sales for " << monthNames[j] << ": ";
			cin >> storeSale;
			cin.ignore();
			storeSales.push_back(storeSale);
		}

		storeSalesCsv.WriteFile(storeName, storeSales[0], storeSales[1], storeSales[2], storeSales[3]);
	}

	storeSalesCsv.CloseFile();
}