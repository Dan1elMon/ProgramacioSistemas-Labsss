#include <iostream> // Incluye la librería para la entrada y salida estándar
using namespace std; // Permite el uso de los nombres de la biblioteca estándar sin el prefijo std::

int main() // Función principal del programa
{
    try {
        throw 'a'; // Lanza una excepción de tipo char con el valor 'a'
    }
    catch (int x) { // Intenta capturar una excepción de tipo entero (int)
        cout << "capturado " << x; // Imprime un mensaje con la excepción capturada
    }
    catch (...) { // Captura cualquier tipo de excepción que no haya sido capturada por los bloques catch anteriores
        cout << "Excepción por defecto\n"; // Imprime un mensaje indicando que se ha capturado una excepción por defecto
    }
    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
