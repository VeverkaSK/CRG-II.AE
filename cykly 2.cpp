#include <iostream>
using namespace std;

int main(){
    
    int a, b, c, vyska;
    
    cout << "Typ 1: \n" "* \n" "** \n" "*** \n" "**** \n" << endl;
    cout << "Zadaj pocet riadkov: ";
    cin >> vyska;
                                        // *
    for (a = 1; a <= vyska; a++) {      // **
        for (b = 1; b <= a; b++) {      // ***
            cout << '*';                // ****
        }
        cout << endl;
    }

    cout << "\n" "Typ 2: \n" "   * \n" "  ** \n" " *** \n" "**** \n" << endl;
    cout << "Zadaj pocet riadkov: ";
    cin >> vyska;

    for (a = 1; a <= vyska; a++) {              //    *
        for (b = 1; b <= vyska - a; b++)        //   **
            cout << ' ';                        //  ***
        for (c = 1; c <= a; c++)                // ****
            cout << '*';
        cout << endl;
    }

    cout << "\n" "Typ 3: \n" "**** \n" "*** \n" "** \n" "* \n" << endl;
    cout << "Zadaj pocet riadkov: ";
    cin >> vyska;
    
    for (a = vyska; a >= 1; a--) {              // ****
        for (int b = a; b > 0; b--) {           // ***
            cout << "*";                        // **
        }                                       // *
        cout << endl;
    }

    cout << "\n" "Typ 4: \n" "**** \n" " *** \n" "  ** \n" "   * \n" << endl;
    cout << "Zadaj pocet riadkov: ";
    cin >> vyska;

    for (a = vyska; a >= 1; a--) {              // ****
        for (int b = vyska - a; b > 0; b--) {   //  ***
            cout << " ";                        //   **
        }                                       //    *
        for (int c = a; c > 0; c--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}