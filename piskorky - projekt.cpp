//Samuel Polacek 2022
#include <iostream>
using namespace std;

char hraciepolecisla[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
int riadok, stlpec, volba, volba2;
char tah = 'X';
bool remiza = false;

void hracie_pole() {
    cout << "+---------------------------+\n";
    cout << "|         Piskorky          |\n";
    cout << "|      Hrac X | Hrac O      |\n";
    cout << "|     _____ _____ _____     |\n";
    cout << "|    |     |     |     |    |\n";
    cout << "|    |  " << hraciepolecisla[0][0] << "  |  " << hraciepolecisla[0][1] << "  |  " << hraciepolecisla[0][2] << "  |    |\n";
    cout << "|    |_____|_____|_____|    |\n";
    cout << "|    |     |     |     |    |\n";
    cout << "|    |  " << hraciepolecisla[1][0] << "  |  " << hraciepolecisla[1][1] << "  |  " << hraciepolecisla[1][2] << "  |    |\n";
    cout << "|    |_____|_____|_____|    |\n";
    cout << "|    |     |     |     |    |\n";
    cout << "|    |  " << hraciepolecisla[2][0] << "  |  " << hraciepolecisla[2][1] << "  |  " << hraciepolecisla[2][2] << "  |    |\n";
    cout << "|    !_____!_____!_____!    |\n";
    cout << "|                           |\n";
    cout << "+---------------------------+\n";
}

void tah_hraca() {
    if (tah == 'X') {
        cout << "|                           |\n";
        cout << "| Hrac 2 [X]  (Hodnota 1-9) |\n";
        cout << "|                           |\n";
        cout << "+---------------------------+\n";
    }
    else if (tah == 'O') {
        cout << "|                           |\n";
        cout << "| Hrac 2 [O]  (Hodnota 1-9) |\n";
        cout << "|                           |\n";
        cout << "+---------------------------+\n";
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
        cout << "+---------------------------+\n";
        cout << "|       Neplatna volba      |\n";
        cout << "+---------------------------+\n";
    }

    if (tah == 'X' && hraciepolecisla[riadok][stlpec] != 'X' && hraciepolecisla[riadok][stlpec] != 'O') {
        hraciepolecisla[riadok][stlpec] = 'X';
        tah = 'O';
    }
    else if (tah == 'O' && hraciepolecisla[riadok][stlpec] != 'X' && hraciepolecisla[riadok][stlpec] != 'O') {
        hraciepolecisla[riadok][stlpec] = 'O';
        tah = 'X';
    }
    else {
        cout << "+---------------------------+\n";
        cout << "|      Pole je vyplnene     |\n";
        cout << "|       vyber si ine        |\n";
        cout << "+---------------------------+\n";
        tah_hraca();
    }
    hracie_pole();
    system("CLS");
}

bool koniec_hry() {
    for (int i = 0; i < 3; i++)
        if (hraciepolecisla[i][0] == hraciepolecisla[i][1] && hraciepolecisla[i][0] == hraciepolecisla[i][2] || hraciepolecisla[0][i] == hraciepolecisla[1][i] && hraciepolecisla[0][i] == hraciepolecisla[2][i])
            return false;

    if (hraciepolecisla[0][0] == hraciepolecisla[1][1] && hraciepolecisla[0][0] == hraciepolecisla[2][2] || hraciepolecisla[0][2] == hraciepolecisla[1][1] && hraciepolecisla[0][2] == hraciepolecisla[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (hraciepolecisla[i][j] != 'X' && hraciepolecisla[i][j] != 'O')
                return true;

    remiza = true;
    return false;
}

int main()
{
    while (koniec_hry()) {
        hracie_pole();
        tah_hraca();
        koniec_hry();
    }
    if (tah == 'X' && remiza == false) {
        cout << "+---------------------------+\n";
        cout << "|        Gratulujem,        |\n";
        cout << "|       hrac O vyhral!      |\n";
        cout << "+---------------------------+\n";
    }
    else if (tah == 'O' && remiza == false) {
        cout << "+---------------------------+\n";
        cout << "|        Gratulujem,        |\n";
        cout << "|       hrac X vyhral!      |\n";
        cout << "+---------------------------+\n";
    }
    else if (remiza == true) {
        cout << "+---------------------------+\n";
        cout << "|           Remiza          |\n";
        cout << "+---------------------------+\n";
    }
    return 0;
}
