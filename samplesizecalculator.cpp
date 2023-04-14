#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double z, p, q, e, n;

    do {
        // Pedir datos de entrada
        cout << "Ingrese la poblacion (N): ";
        cin >> N;
        cout << "Ingrese el nivel de confianza (z): ";
        cin >> z;
        cout << "Ingrese la probabilidad de exito (p): ";
        cin >> p;
        cout << "Ingrese la probabilidad de fracaso (q): ";
        cin >> q;
        cout << "Ingrese el nivel de error (e): ";
        cin >> e;

        // Calcular tamaño de la muestra
        n = N * pow(z, 2) * p * (1 - p) / ((N - 1) * pow(e, 2) + pow(z, 2) * p * (1 - p));

        // Mostrar resultado
        cout << "El tamaño de la muestra finita es: " << ceil(n) << endl;

        // Preguntar si se desea realizar otro cálculo
        char answer;
        cout << "Desea realizar otro calculo? (s/n): ";
        cin >> answer;
        if (answer != 's' && answer != 'S') {
            break;
        }
    } while (true);

    return 0;
}