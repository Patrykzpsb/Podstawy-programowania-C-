#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2, suma;
    
    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;
    
    cout << "Podaj drugą liczbę: ";
    cin >> liczba2;
    
    suma = liczba1 + liczba2;
    
    cout << "Suma: " << suma << endl;
    
    if (suma % 2 == 0) {
        cout << "Wynik jest liczbą parzystą." << endl;
    } else {
        cout << "Wynik jest liczbą nieparzystą." << endl;
    }
    
    return 0;
}