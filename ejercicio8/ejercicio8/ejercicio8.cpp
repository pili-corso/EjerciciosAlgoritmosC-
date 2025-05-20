#include <iostream>
using namespace std;

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
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
