#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz NxN: ";
    cin >> n;
    
    int** matriz = asignamosMatriz(n, n);
    inicializamosMatriz(matriz, n, n);

    cout << "Matriz original:" << endl;
    imprimirMatrix(matriz, n, n);

    int opcion;
     //imprimimos menu de opciones el cual se ejecutara hasta mandar la opcion 0
    do {
        cout << "\nMenu de opciones:\n";
        cout << "1. Transponer matriz\n";
        cout << "2. Verificar si es simetrica\n";
        cout << "3. Verificar si es antisimetrica\n";
        cout << "4. Verificar si es triangular superior\n";
        cout << "5. Verificar si es triangular inferior\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int** transpuesta = transponerMatriz(matriz, n, n);
                cout << "Matriz transpuesta:" << endl;
                imprimirMatrix(transpuesta, n, n);
                librerarMemoriaMatriz(transpuesta, n);
                break;
            }
            case 2:
                if (esSimetrica(matriz, n, n))
                    cout << "La matriz es simetrica." << endl;
                else
                    cout << "La matriz no es simetrica." << endl;
                break;
            case 3:
                if (esAntiSimetrica(matriz, n, n))
                    cout << "La matriz es antisimetrica." << endl;
                else
                    cout << "La matriz no es antisimetrica." << endl;
                break;
            case 4:
                if (esTriangularSuperior(matriz, n, n))
                    cout << "La matriz es triangular superior." << endl;
                else
                    cout << "La matriz no es triangular superior." << endl;
                break;
            case 5:
                if (esTriangularInferior(matriz, n, n))
                    cout << "La matriz es triangular inferior." << endl;
                else
                    cout << "La matriz no es triangular inferior." << endl;
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, intente de nuevo." << endl;
        }
    } while (opcion != 0);

    //libreamos memoria de la matrix
    librerarMemoriaMatriz(matriz, n);
    return 0;
}
