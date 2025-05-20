#include <iostream>
using namespace std;

int main() {
    int n, factorial1 = 1, factorial2 = 1, i;

    cout << "Ingrese un numero: ";
    cin >> n;

    // Con MIENTRAS
    i = 1;
    while (i <= n) {
        factorial1 *= i;
        i++;
    }

    // Con PARA
    for (i = 1; i <= n; i++) {
        factorial2 *= i;
    }

    cout << "Factorial con MIENTRAS: " << factorial1 << endl;
    cout << "Factorial con PARA: " << factorial2 << endl;
    return 0;
}
