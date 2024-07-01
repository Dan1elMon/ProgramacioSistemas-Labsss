#include <iostream>
using namespace std;

int main() {
    try {
        try {
            try {
                throw 'x'; // Lanza una excepción de tipo char con el valor 'x'
            }
            catch(int i) {
                // Este bloque catch captura excepciones de tipo int, pero no se ejecutará
            }
            catch(float k) {
                // Este bloque catch captura excepciones de tipo float, pero no se ejecutará
            }
        }
        catch(unsigned int x) {
            // Este bloque catch captura excepciones de tipo unsigned int, pero no se ejecutará
        }
    }
    catch(char c) {
        // Este bloque catch captura excepciones de tipo char
        cout << "El valor de c es: " << c << endl; // Imprime el valor capturado de tipo char
    }

    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
