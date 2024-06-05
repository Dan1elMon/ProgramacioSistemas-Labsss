#include <iostream>
using namespace std;

// Funciones para cada opción del menú
void funcion1() {
    cout << "Función 1" << endl;
}

void funcion2() {
    cout << "Función 2" << endl;
}

void funcion3() {
    cout << "Función 3" << endl;
}

void funcion4() {
    cout << "Función 4" << endl;
}

int main() {
    int opcion;
    
    do {
        // Mostrar menú
        cout << "Menu:" << endl;
        cout << "1. Función 1" << endl;
        cout << "2. Función 2" << endl;
        cout << "3. Función 3" << endl;
        cout << "4. Función 4" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        // Manejar la opción seleccionada
        switch(opcion) {
            case 1:
                funcion1();
                break;
            case 2:
                funcion2();
                break;
            case 3:
                funcion3();
                break;
            case 4:
                funcion4();
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

        cout << endl;

    } while (opcion != 5); // Repetir hasta que el usuario elija salir

    return 0;
}
