#include <iostream>
using namespace std;

int main() {
    int N;
    char seguir;

    cout << "Ingrese el valor inicial N: ";
    cin >> N;

    // Asegurar que el número sea par
    if (N % 2 != 0)
        N++;

    do {
        cout << "Numero par: " << N << endl;
        N += 2;

        cout << "¿Desea ver el siguiente numero par? (s/n): ";
        cin >> seguir;

    } while (seguir == 's' || seguir == 'S');

    return 0;
}
