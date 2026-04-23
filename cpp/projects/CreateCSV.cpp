#include "FileCreator.h"

int main() {
	string fileName;
	getline(cin, fileName);

	FileCreator storeSales = FileCreator(fileName);
	storeSales.WriteHeader();
	for (int i = 1; i <= 5; i++) {
		string storeName;
		cout << "Enter store name " + i;
		cin >> storeName;
	}
}