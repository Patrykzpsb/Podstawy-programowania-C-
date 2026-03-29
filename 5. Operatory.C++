#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "Podaj pierwszą liczbę całkowitą: ";
    cin >> a;
    
    cout << "Podaj drugą liczbę całkowitą: ";
    cin >> b;
    
    cout << "\n--- Wyniki operacji ---\n";
    cout << "Dodawanie: " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Odejmowanie: " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Mnożenie: " << a << " * " << b << " = " << (a * b) << endl;
    
    if (b != 0) {
        cout << "Dzielenie: " << a << " / " << b << " = " << (a / b) << endl;
        cout << "Reszta z dzielenia: " << a << " % " << b << " = " << (a % b) << endl;
    } else {
        cout << "Dzielenie: niemożliwe (dzielenie przez zero)\n";
        cout << "Reszta z dzielenia: niemożliwa (dzielenie przez zero)\n";
    }
    
    return 0;
}