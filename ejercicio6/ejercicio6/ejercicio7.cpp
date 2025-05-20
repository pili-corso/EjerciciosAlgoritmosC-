#include <iostream>
using namespace std;
//ESTE ES EL 7 ME CONFUNDI DE NOMBRE
int main() {
    int N, M, temp;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese M: ";
    cin >> M;

    if (N > M) {
        temp = N;
        N = M;
        M = temp;
    }

    for (int i = N; i <= M; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
