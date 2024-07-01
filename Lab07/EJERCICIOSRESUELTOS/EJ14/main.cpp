#include <iostream>
using namespace std;

void Programa(); // Declaración de la función Programa

int main() {
    try {
        // Llamada a la función Programa dentro de un bloque try
        Programa();
    }
    catch (int x) {
        // Captura la excepción relanzada de tipo int
        cout << "Excepción relanzada capturada." << endl;
        cout << "error: " << x << endl;
    }
    catch (...) {
        // Captura cualquier otra excepción no manejada previamente
        cout << "Excepción inesperada." << endl;
    }
    cin.get(); // Espera una entrada del usuario antes de terminar el programa
    return 0;
}

void Programa() {
    try {
        // Se lanza una excepción de tipo int con valor 10
        throw 10;
    }
    catch (int x) {
        // Relanza la excepción para que sea manejada por un manejador de excepciones en una función superior
        throw;
    }
}
