//Samuel Pol·Ëek 2022
#include <iostream>
using namespace std;

char hraciepole[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int riadok, stlpec, volba, volba2;
char tah = 'X';
bool remiza = false;

void hracie_pole() {
    cout << "  Hrac X | Hrac O\n";
    cout << "===================\n";
    cout << "|     |     |     |\n";
    cout << "|  " << hraciepole[0][0] << "  |  " << hraciepole[0][1] << "  |  " << hraciepole[0][2] << "  |\n";
    cout << "|_____|_____|_____|\n";
    cout << "|     |     |     |\n";
    cout << "|  " << hraciepole[1][0] << "  |  " << hraciepole[1][1] << "  |  " << hraciepole[1][2] << "  |\n";
    cout << "|_____|_____|_____|\n";
    cout << "|     |     |     |\n";
    cout << "|  " << hraciepole[2][0] << "  |  " << hraciepole[2][1] << "  |  " << hraciepole[2][2] << "  |\n";
    cout << "|     |     |     |\n";
    cout << "===================\n";
}

void tah_hraca() {
    if (tah == 'X') {
        cout << "\nHrac 1 [X]: ";
    }
    else if (tah == 'O') {
        cout << "\nHrac 2 [O]: ";
    }
    cin >> volba;

    switch (volba) {
    case 1: riadok = 0; stlpec = 0; break;
    case 2: riadok = 0; stlpec = 1; break;
    case 3: riadok = 0; stlpec = 2; break;
    case 4: riadok = 1; stlpec = 0; break;
    case 5: riadok = 1; stlpec = 1; break;
    case 6: riadok = 1; stlpec = 2; break;
    case 7: riadok = 2; stlpec = 0; break;
    case 8: riadok = 2; stlpec = 1; break;
    case 9: riadok = 2; stlpec = 2; break;
    default:
        cout << "Neplatna volba\n";
    }

    if (tah == 'X' && hraciepole[riadok][stlpec] != 'X' && hraciepole[riadok][stlpec] != 'O') {
        hraciepole[riadok][stlpec] = 'X';
        tah = 'O';
    }
    else if (tah == 'O' && hraciepole[riadok][stlpec] != 'X' && hraciepole[riadok][stlpec] != 'O') {
        hraciepole[riadok][stlpec] = 'O';
        tah = 'X';
    }
    else {
        cout << "Pole je vyplnene vyber si ine: \n";
        tah_hraca();
    }
    hracie_pole();
    system("CLS");
}

bool koniec_hry() {
    for (int i = 0; i < 3; i++)
        if (hraciepole[i][0] == hraciepole[i][1] && hraciepole[i][0] == hraciepole[i][2] || hraciepole[0][i] == hraciepole[1][i] && hraciepole[0][i] == hraciepole[2][i])
            return false;

    if (hraciepole[0][0] == hraciepole[1][1] && hraciepole[0][0] == hraciepole[2][2] || hraciepole[0][2] == hraciepole[1][1] && hraciepole[0][2] == hraciepole[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (hraciepole[i][j] != 'X' && hraciepole[i][j] != 'O')
                return true;

    remiza = true;
    return false;
}

int main()
{
    cout << "      PISKORKY\n";
    while (koniec_hry()) {
        hracie_pole();
        tah_hraca();
        koniec_hry();
    }
    if (tah == 'X' && remiza == false) {
        cout << "Gratulujem hrac O vyhral!\n";
    }
    else if (tah == 'O' && remiza == false) {
        cout << "Gratulujem hrac X vyhral!\n";
    }
    else
        cout << "Remiza!\n";
    return 0;
}