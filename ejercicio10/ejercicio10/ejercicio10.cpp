#include <iostream>
using namespace std;

int main() {
    int N, num, div7 = 0, noDiv7 = 0;
    cout << "Cantidad de numeros a leer: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num % 7 == 0)
            div7++;
        else
            noDiv7++;
    }

    cout << "Divisibles por 7: " << div7 << endl;
    cout << "No divisibles por 7: " << noDiv7 << endl;
    return 0;
}
