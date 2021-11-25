#include<iostream>
#include<cmath>


using namespace std;

int main()
{
    double a;
    double b;
    double c;
    char op;


    cout << "Zadaj operaciu (+, -, /, *): ";
    cin >> op;

    cout << "Zadaj cislo a: ";
    cin >> a;

    cout << "Zadaj cislo b: ";
    cin >> b;

    switch (op) {
    case '+':
        cout << a << "+" << b << "=" << a + b << endl;
        break;
    case '-':
        cout << a << "-" << b << "=" << a - b << endl;
        break;
    case '*':
        cout << a << "*" << b << "=" << a * b << endl;
        break;
    case '/':
        cout << a << "/" << b << "=" << a / b << endl;
        break;


    default:
        cout << "Toto neni operacia, skus znova";
        break;
    }


    return 0;
}