#include <iostream>
using namespace std;

int main()
{
    char pole[100];
    int i; int cisla = 0, medzery = 0, specialneznaky = 0;
    int samohlasky = 0, spoluhlasky = 0;
    cout << "Napis hocico \n";
    gets_s(pole);
    for (i = 0; pole[i] != '\0'; i++) {
        if (pole[i] == 'a' || pole[i] == 'e' || pole[i] == 'i' || pole[i] == 'o' || pole[i] == 'u' || 
            pole[i] == 'A' || pole[i] == 'E' || pole[i] == 'I' || pole[i] == 'O' || pole[i] == 'U') {
            samohlasky++;
        }
        else if (
            (pole[i] >= 'a' && pole[i] <= 'z' || pole[i] >= 'A' && pole[i] <= 'Z')) {
            spoluhlasky++;
        }
        else if (pole[i] >= '0' && pole[i] <= '9')
        {
            cisla++;
        }
        else if (pole[i] == ' ') {
            medzery++;
        }
        else {
            specialneznaky++;
        }
    }
    system("CLS");
    cout << "\nZadane pole: " << pole;
    cout << "\nPocet samohlasok: " << samohlasky;
    cout << "\nPocet spoluhlasok: " << spoluhlasky; 
    cout << "\nPocet cisel: " << cisla; 
    cout << "\nPocet medzier: " << medzery;
    cout << "\nPocet specialnych znakov: " << specialneznaky;
    return 0;
}