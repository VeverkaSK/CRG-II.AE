#include <iostream>
using namespace std;

int main() {
	cout << "Zadaj X: ";
	int x;
	cin >> x;

	cout << "Zadaj Y: ";
	int y;
	cin >> y;

	cout << "Zadaj hranicu: ";
	int h;
	cin >> h;

	while (x <= h) {
		cout << x << ", ";
		x++;
		x++;
	}

	while (y <= h) {
		cout << y << ", ";
		y++;
		y++;
	}
	return 0;
}