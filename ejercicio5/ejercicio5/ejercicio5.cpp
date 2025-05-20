#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    if (N < 0)
        N *= -1;

    for (int i = 0; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
