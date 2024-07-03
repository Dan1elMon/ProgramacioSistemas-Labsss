#include <iostream>
using namespace std;

// Función que realiza la división y lanza una excepción si el divisor es cero
double division(int dividendo, int divisor) {
    if (divisor == 0) {
        throw "Error: División por cero";
    }
    return static_cast<double>(dividendo) / divisor;
}

int main() {
    int num1, num2;

    // Solicitar al usuario los números a dividir
    cout << "Ingrese el dividendo: ";
    cin >> num1;
    cout << "Ingrese el divisor: ";
    cin >> num2;

    try {
        // Llamar a la función division y capturar cualquier excepción lanzada
        double resultado = division(num1, num2);
        cout << "Resultado de la división: " << resultado << endl;
    } catch (const char* msg) {
        // Capturar la excepción y mostrar un mensaje de error
        cout << "Error capturado: " << msg << endl;
    }

    return 0;
}
