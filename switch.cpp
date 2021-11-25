#include <iostream>
using namespace std;

int main()
{
    cout << "Zadaj cislo 1-3 (1-jablko, 2-mec, 3-hudba): ";
    int slovo;
    cin >> slovo;
    
    switch (slovo) {
    case 1:
        cout << "Som hladny" << endl;
        break; 
    case 2:
        cout << "Do zbrane" << endl;
        break;
    case 3:
        cout << "nanannannana" << endl;
        break;
    default:
        cout << "Toto slovo nepozam" << endl;
        break;
    }
    return 0;
}
