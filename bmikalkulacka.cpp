#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Zadaj vysku (v metroch): ";
	double vyska;
	cin >> vyska;
	cout << "Zadaj vahu (v kilogramoch): ";
	double vaha;
	cin >> vaha;

	double vysledok;
	vysledok = vaha / (vyska * vyska);
	

	if (vysledok <= 18.49) {
		cout << "Tvoje BMI je: " << vysledok << " (Podvyziva)" << endl;
		return 0;
	}
	if ((vysledok >= 18.50) && (vysledok <= 24.99)) {
		cout << "Tvoje BMI je: " << vysledok << " (Normalna hmotnost)" << endl;
		return 0;
	}
	if ((vysledok >= 25) && (vysledok <= 29.99)) {
		cout << "Tvoje BMI je: " << vysledok << " (Nadvaha)" << endl;
		return 0;
	}
	if (vysledok >= 29.99) {
		cout << "Tvoje BMI je: " << vysledok << " (Obezita)" << endl;
		return 0;
	}

}
