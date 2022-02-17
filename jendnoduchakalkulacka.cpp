#include <iostream>
using namespace std;

double scitanie(double c1, double c2) {
    return c1 + c2;
}
double odcitanie(double c1, double c2) {
    return c1 - c2;
}
double delenie(double c1, double c2) {
    return c1 / c2;
}
double nasobenie(double c1, double c2) {
    return c1 * c2;
}

int main()
{
    zaciatok:
    int volba;
    double c1, c2;
    cout << "Zadaj cislo 1: ";
    cin >> c1;
    cout << "Zadaj cislo 2: ";
    cin >> c2;

    cout << "Vyber operaciu \n 1- scitanie\n 2- odcitanie\n 3- nasobenie\n 4- delenie\n ==> ";
    cin >> volba;
    
    if (volba == 1) {
        double vysledok = scitanie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (volba == 2) {
        double vysledok = odcitanie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (volba == 3) {
        double vysledok = nasobenie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (volba == 4) {
        if (c2 == 0) {
            cout << "0 sa delit neda, skus znova." << endl;
            goto zaciatok;
        }
        double vysledok = delenie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (volba > 4 || volba < 1) {
        cout << "Chybna operacia" << endl;
        goto zaciatok;
    }
    
    cout << "Znova? (1- ano; 0- nie): ";
    int volba2;
    cin >> volba2;
    if (volba2 == 1) {
        goto zaciatok;
    }
    else {
        return 0;
    }
}
