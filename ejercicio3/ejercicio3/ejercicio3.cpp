#include <iostream>
using namespace std;

int main() {
    int n;
    char repetir;

    do {
        int factorial = 1;
        cout << "Ingrese un numero: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << "Factorial: " << factorial << endl;
        cout << "Desea repetir? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    return 0;
}
