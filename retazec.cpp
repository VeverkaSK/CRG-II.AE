#include <iostream>
#include <string>
using namespace std;

int main() {
znovu:
    int pocetSamohlasek = 0;
    int pocetSpoluhlasok = 0;
    int pocetCisel = 0;

    cout << "Zadaj retazec: ";
    string retazec;
    cin >> retazec;

    string samohlasky = "aeiouyAEUOUY";
    string spoluhlasky = "bcdfghijklmnpqrstvwxzBCDFGHIJKLMNPQRSTVWXZ";
    string cisla = "0123456789";

    for (int i = 0; i < retazec.length(); i++)
    {
        if (samohlasky.find(retazec[i]) < samohlasky.length())
            pocetSamohlasek++;
        else if (spoluhlasky.find(retazec[i]) < spoluhlasky.length())
            pocetSpoluhlasok++;
        else if (cisla.find(retazec[i]) < cisla.length())
            pocetCisel++;
    }

    cout << "Pocet samohlasok: " << pocetSamohlasek << endl;
    cout << "Pocet spoluhlasok: " << pocetSpoluhlasok << endl;
    cout << "Pocet cisel: " << pocetCisel << endl;
    cout << "Pocet inych znakov: " << retazec.length() - pocetSamohlasek - pocetSpoluhlasok - pocetCisel << endl;

    cout << "Nove slovo? 1-ano 0-nie: ";
    int volba;
    cin >> volba;
    if (volba == 1) {
        goto znovu;
        system("CLS");
    }
    else {
        return 0;
    }
}
