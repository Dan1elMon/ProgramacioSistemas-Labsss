#include <iostream>
using namespace std;

int main() {
    try {
        throw 'x'; // Lanza una excepción de tipo char con el valor 'x'
    }
    catch(char c) { // Captura la excepción de tipo char
        cout << "El valor de c es: " << c << endl; // Imprime el valor capturado de tipo char
    }
    catch(int n) { // Este bloque catch captura excepciones de tipo int, pero no se ejecutará en este caso
        cout << "El valor de n es: " << n << endl; // Imprime el valor capturado de tipo int
    }

    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
