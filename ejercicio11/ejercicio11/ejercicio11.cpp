#include <iostream>
using namespace std;

int main() {
    int N;
    float nota, suma = 0;
    int validas = 0, invalidas = 0;

    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> nota;

        if (nota >= 0 && nota <= 5) {
            suma += nota;
            validas++;
        }
        else {
            invalidas++;
        }
    }

    if (validas > 0) {
        float promedio = suma / validas;
        cout << "Promedio de notas validas: " << promedio << endl;
    }
    else {
        cout << "No se ingresaron notas validas." << endl;
    }

    float porcentajeInvalidas = (float)invalidas / N * 100;
    cout << "Porcentaje de notas invalidas: " << porcentajeInvalidas << "%" << endl;

    return 0;
}
