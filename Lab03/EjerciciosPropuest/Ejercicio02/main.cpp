// main.cpp

#include <iostream>
#include "funciones.h" 

using namespace std;

int main() {
    int opcion;
    cout << "Seleccione la figura para calcular el área:\n";
    cout << "1. Cuadrado\n";
    cout << "2. Rectángulo\n";
    cout << "3. Triángulo\n";
    cout << "Opción: ";
    cin >> opcion;

    double lado, largo, ancho, base, altura;
    double area = 0.0;

    switch (opcion) {
        case 1:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = areaCuadrado(lado);
            break;
        case 2:
            cout << "Ingrese el largo del rectángulo: ";
            cin >> largo;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            area = areaRectangulo(largo, ancho);
            break;
        case 3:
            cout << "Ingrese la base del triángulo: ";
            cin >> base;
            cout << "Ingrese la altura del triángulo: ";
            cin >> altura;
            area = areaTriangulo(base, altura);
            break;
        default:
            cout << "Opción no válida." << endl;
            return 1; // Indicar error
    }

    cout << "El área es: " << area << endl;

    return 0;
}
