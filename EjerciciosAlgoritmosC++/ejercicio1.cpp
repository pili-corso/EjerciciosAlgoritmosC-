#include <iostream>
using namespace std;

int main() {
    int N, suma1 = 0, suma2 = 0, i;
    cout << "Ingrese un numero N: ";
    cin >> N;

    // Con MIENTRAS
    i = 1;
    while (i <= N) {
        suma1 += i;
        i++;
    }

    // Con PARA
    for (i = 1; i <= N; i++) {
        suma2 += i;
    }

    cout << "Suma con MIENTRAS: " << suma1 << endl;
    cout << "Suma con PARA: " << suma2 << endl;
    return 0;
}
