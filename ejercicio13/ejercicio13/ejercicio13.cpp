#include <iostream>
using namespace std;

int main() {
    int p, q, temp;
    int acum1 = 0, suma2 = 0, conteo3 = 0;

    cout << "Ingrese el valor de p: ";
    cin >> p;
    cout << "Ingrese el valor de q: ";
    cin >> q;

    // Asegurar que p y q sean positivos
    if (p < 0) p = -p;
    if (q < 0) q = -q;

    // Asegurar que p < q
    if (p > q) {
        temp = p;
        p = q;
        q = temp;
    }

    for (int i = p; i <= q; i++) {
        int digitoFinal = i % 10;
        if (digitoFinal == 1)
            acum1 += i;
        else if (digitoFinal == 2)
            suma2 += i;
        else if (digitoFinal == 3)
            conteo3++;
    }

    cout << "Acumulado de numeros terminados en 1: " << acum1 << endl;
    cout << "Suma de numeros terminados en 2: " << suma2 << endl;
    cout << "Cantidad de numeros terminados en 3: " << conteo3 << endl;

    return 0;
}
