#include <iostream>
using namespace std;

int main() {
	int c;
	cout << "Zadaj zaporne cislo: ";
	while (true) {
		cin >> c;
		if (c >= 0)
			cout << "Chyba!" << endl;
		else
			break;
	}

	while (c <= 0) {
		cout << c << endl;
		c++;
	}
	return 0;
}
