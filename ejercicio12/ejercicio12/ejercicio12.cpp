#include <iostream>
using namespace std;

int main() {
    int N, numero, suma = 0, aceptados = 0, rechazados = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero > 0) {
            suma += numero;
            aceptados++;
        }
        else {
            rechazados++;
        }
    }

    cout << "Suma de numeros aceptados: " << suma << endl;

    float porcentajeRechazados = (float)rechazados / N * 100;
    cout << "Porcentaje de numeros rechazados: " << porcentajeRechazados << "%" << endl;

    return 0;
}
