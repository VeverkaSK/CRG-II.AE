#include <iostream>
using namespace std;

int main()
{
    int i, j, x, y;
    string sachovnica[8][8];
    string osy[8] = { "0", "1", "2", "3", "4", "5", "6", "7" };

    for (i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            sachovnica[i][j] = " ";
        }
    }

    cout << "Zadaj hodnotu X: ";
    cin >> x;
    cout << "Zadaj hodnotu Y: ";
    cin >> y;
    sachovnica[x][y] = "X";

    cout << "  01234567" << endl;
    for (i = 0; i < 8; i++) {
        cout << osy[i] << " ";
        for (int j = 0; j < 8; j++) {
            cout << sachovnica[i][j];
        }
        cout << endl;
    }
    return 0;
}