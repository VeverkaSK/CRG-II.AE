#include <iostream>
using namespace std;

int main()
{
    cout << "Napis zazracne slovicko (HeySiri, OkGoogle): ";
    string temp;
    cin >> temp;

    if ((temp == "OkGoogle") || (temp == "HeySiri")) {
        cout << "Zadaj hlasitos(0-100): ";
        int voltemp;
        cin >> voltemp;
        if ((voltemp < 0) || (voltemp > 100)) {
            cout << "Chyba - Neplatna hlasitost" << endl;
        }
        else {
            cout << "Hlasitost je na " << voltemp << "%" << endl;
        }
    }
    else {
        cout << "Chyba" << endl;
    }
}
