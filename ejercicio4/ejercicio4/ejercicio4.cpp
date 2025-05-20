#include <iostream>
using namespace std;

int main() {
    int n, tipo;
    float monto, totalCorriente = 0, totalAhorros = 0;
    int negativas = 0, totalIngresos = 0;

    cout << "Ingrese la cantidad de clientes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Tipo de cuenta (0: Corriente, 1: Ahorros): ";
        cin >> tipo;
        cout << "Monto ingresado: ";
        cin >> monto;

        if (monto < 0) {
            negativas++;
        }
        else {
            if (tipo == 0)
                totalCorriente += monto;
            else
                totalAhorros += monto;
        }
        totalIngresos++;
    }

    cout << "Total consignado en cuentas corrientes: $" << totalCorriente << endl;
    cout << "Total consignado en cuentas de ahorros: $" << totalAhorros << endl;
    cout << "Porcentaje de consignaciones negativas: " << (float)negativas / totalIngresos * 100 << "%" << endl;

    return 0;
}
