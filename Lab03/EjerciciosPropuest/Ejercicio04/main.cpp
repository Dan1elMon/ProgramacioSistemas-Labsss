// main.cpp

#include <iostream>
#include "funciones.h" // Incluir el archivo de cabecera

using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "Seleccione una opción:\n";
        cout << "1. Jugar Craps\n";
        cout << "2. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 2) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        switch (opcion) {
            case 1:
                jugarCraps();
                break;
            default:
                cout << "Opción no válida." << endl;
        }
        cout << endl;
    }

    return 0;
}
