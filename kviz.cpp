#include <iostream>
using namespace std;

int main()
{
    cout << "Kto vlastni Google? \n" "1) Alphabet \n" "2) Microsoft \n" "3) Apple \n" "4) Google" << endl;
    int odpoved1;
    cin >> odpoved1;
    if ((odpoved1 > 4) || (odpoved1 < 1)) {
        cout << "Neplatna odpoved" << endl;
        return 0;
    }
    switch (odpoved1) {
    case 1:
        cout << "Spravne!" << endl;
        break;
    case 2:
        cout << "Nespravne" << endl;
        return 0;
    case 3:
        cout << "Nespravne" << endl;
        return 0;
    case 4:
        cout << "Nespravne" << endl;
        return 0;
    }
    /*----------------------------------*/
    cout << "Kto je riaditelom SPSIT? \n" "1) Igor Palica \n" "2) Milan Sevcik \n" "3) Milan Valek \n" "4) Jan Dudesek" << endl;
    int odpoved2;
    cin >> odpoved2;
    if ((odpoved2 > 4) || (odpoved2 < 1)) {
        cout << "Neplatna odpoved" << endl;
        return 0;
    }
    switch (odpoved2) {
    case 3:
        cout << "Spravne!" << endl;
        break;
    case 2:
        cout << "Nespravne" << endl;
        return 0;
    case 1:
        cout << "Nespravne" << endl;
        return 0;
    case 4:
        cout << "Nespravne" << endl;
        return 0;
    }
    /*----------------------------------*/
    cout << "Ktora firma je najvacsia na svete? (k 11.11.2021) \n" "1) Tesla \n" "2) Facebook \n" "3) Microsoft \n" "4) Apple" << endl;
    int odpoved3;
    cin >> odpoved3;
    if ((odpoved3 > 4) || (odpoved3 < 1)) {
        cout << "Neplatna odpoved" << endl;
        return 0;
    }
    switch (odpoved3) {
    case 4:
        cout << "Spravne!" << endl;
        break;
    case 2:
        cout << "Nespravne" << endl;
        return 0;
    case 3:
        cout << "Nespravne" << endl;
        return 0;
    case 1:
        cout << "Nespravne" << endl;
        return 0;
    }
    /*----------------------------------*/
    cout << "Kto je najbohatsi clovek? (11.11.2021) \n" "1) Elon Musk \n" "2) Jeff Bezos \n" "3) Bill Gates \n" "4) Warren Buffett" << endl;
    int odpoved4;
    cin >> odpoved4;
    if ((odpoved4 > 4) || (odpoved4 < 1)) {
        cout << "Neplatna odpoved" << endl;
        return 0;
    }
    switch (odpoved4) {
    case 2:
        cout << "Spravne!" << endl;
        break;
    case 1:
        cout << "Nespravne" << endl;
        return 0;
    case 3:
        cout << "Nespravne" << endl;
        return 0;
    case 4:
        cout << "Nespravne" << endl;
        return 0;
    }


}
