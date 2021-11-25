#include <iostream>
#include<string>  
using namespace std;

int main()
{
    const int kamen = 1;
    const int papier = 2;
    const int noznice = 3;

    cout << "Zadaj meno hraca 1: ";
    string mp1;
    cin >> mp1;
    cout << "Zadaj meno hraca 2: ";
    string mp2;
    cin >> mp2;
    system("CLS");

    cout << mp1 << " (1-kamen, 2-papier, 3-noznice): ";
    int p1;
    cin >> p1;
    system("CLS");
    if ((p1 > 3) || (p1 < 1)) {
        cout << "Chyba (neplatna akcia)" << endl;
        return 0;
    }

    cout << mp2 << " (1-kamen, 2-papier, 3-noznice): ";
    int p2;
    cin >> p2;
    system("CLS");
    if ((p2 > 3) || (p2 < 1)) {
        cout << "Chyba (neplatna akcia)" << endl;
        return 0;
    }

    if (p1 == p2) {
        cout << "Rovnaka odpoved" << endl;
    } 
    else if ((p1 == papier) && (p2 == noznice)) {
        cout << mp2 << " vyhral" << endl;
    }
    else if ((p2 == papier) && (p1 == noznice)) {
        cout << mp1 << " vyhral" << endl;
    }
    else if ((p1 == noznice) && (p2 == kamen)) {
        cout << mp2 << " vyhral" << endl;
    }
    else if ((p2 == noznice) && (p1 == kamen)) {
        cout << mp1 << " vyhral" << endl;
    }
    else if ((p1 == kamen) && (p2 == papier)) {
        cout << mp2 << " vyhral" << endl;
    }
    else if ((p2 == kamen) && (p1 == papier)) {
        cout << mp1 << " vyhral" << endl;
    }
}
