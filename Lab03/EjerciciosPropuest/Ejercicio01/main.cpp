// main.cpp

#include <iostream>
#include "funciones.h" // Incluir el archivo de cabecera

using namespace std;

int main() {
  // Obtener dos números del usuario
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Preguntar por la operación deseada
    char operation;
    cout << "\nElija la operación que desea realizar (s para sumar, m para multiplicar): ";
    cin >> operation;

    // Realizar la operación según la elección del usuario
    int result;
    switch (operation) {
        case 's':
        case 'S':
        result = sumar(num1, num2);
        break;
        case 'm':
        case 'M':
        result = multiplicar(num1, num2);
        break;
        default:
        cout << "Operación no válida." << endl;
        return 1; // Indicar error
    }

    // Mostrar el resultado
    cout << "\nEl resultado es: " << result << endl;

    return 0;
}
