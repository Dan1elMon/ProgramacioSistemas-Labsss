#include <iostream> // Incluye la librería para la entrada y salida estándar
using namespace std; // Permite el uso de los nombres de la biblioteca estándar sin el prefijo std::

int main() // Función principal del programa
{
    int x = -1; // Declara una variable entera x y le asigna el valor -1
    
    cout << "Antes del bloque try \n"; // Imprime un mensaje en la consola
    
    try {
        cout << "Dentro del bloque try \n"; // Imprime un mensaje en la consola
        
        if (x < 0) { // Verifica si x es menor que 0
            throw x; // Lanza una excepción con el valor de x
            cout << "Después de throw (Nunca ejecutado) \n";
        }
    }
    catch (int x) { // Captura la excepción lanzada si es de tipo int
        cout << "Capturando la excepción \n"; // Imprime un mensaje en la consola indicando que se ha capturado una excepción
    }
    
    cout << "Después del catch (Será ejecutado) \n"; // Imprime un mensaje en la consola después de manejar la excepción
    
    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
