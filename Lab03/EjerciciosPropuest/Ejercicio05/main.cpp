// main.cpp

#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\nMenú de opciones:\n";
        cout << "1. Determinar números pares e impares\n";
        cout << "2. Mostrar los primeros 100 números perfectos\n";
        cout << "3. Invertir los dígitos de un número de cuatro dígitos\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                determinarParesImpares();
                break;
            case 2:
                numerosPerfectos();
                break;
            case 3:
                invertirDigitos();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
