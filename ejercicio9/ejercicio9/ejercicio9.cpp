#include <iostream>
using namespace std;

int main() {
    int N, M, temp;
    char tipo;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese M: ";
    cin >> M;
    cout << "Desea ver pares (p) o impares (i)?: ";
    cin >> tipo;

    if (N > M) {
        temp = N;
        N = M;
        M = temp;
    }

    for (int i = N; i <= M; i++) {
        if (tipo == 'p' && i % 2 == 0)
            cout << i << " ";
        else if (tipo == 'i' && i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}

