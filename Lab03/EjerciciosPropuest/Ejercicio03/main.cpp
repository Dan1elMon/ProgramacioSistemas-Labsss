// main.cpp

#include <iostream>
#include "funciones.h" // Incluir el archivo de cabecera

using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado, num;

    while (true) {
        cout << "Seleccione la operación a realizar:\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicación\n";
        cout << "4. División\n";
        cout << "5. Exponencial Cuadrado\n";
        cout << "6. División Especial (1 / número)\n";
        cout << "7. Raíz Cuadrada\n";
        cout << "8. Porcentaje\n";
        cout << "9. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 9) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        switch (opcion) {
            case 1:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                resultado = sumar(num1, num2);
                break;
            case 2:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                resultado = restar(num1, num2);
                break;
            case 3:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                resultado = multiplicar(num1, num2);
                break;
            case 4:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                if (num2 == 0) {
                    cout << "Error: División por cero no permitida." << endl;
                    continue;
                }
                resultado = dividir(num1, num2);
                break;
            case 5:
                cout << "Ingrese el número: ";
                cin >> num;
                resultado = exponencialCuadrado(num);
                break;
            case 6:
                cout << "Ingrese el número: ";
                cin >> num;
                if (num == 0) {
                    cout << "Error: División por cero no permitida." << endl;
                    continue;
                }
                resultado = divisionEspecial(num);
                break;
            case 7:
                cout << "Ingrese el número: ";
                cin >> num;
                if (num < 0) {
                    cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << endl;
                    continue;
                }
                resultado = raizCuadrada(num);
                break;
            case 8:
                cout << "Ingrese el valor total: ";
                cin >> num1;
                cout << "Ingrese el porcentaje: ";
                cin >> num2;
                resultado = porcentaje(num1, num2);
                break;
            default:
                cout << "Opción no válida." << endl;
                continue;
        }

        cout << "El resultado es: " << resultado << endl << endl;
    }

    return 0;
}
