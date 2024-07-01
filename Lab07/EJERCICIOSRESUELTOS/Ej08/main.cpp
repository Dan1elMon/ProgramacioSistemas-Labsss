#include <iostream> // Incluye la librería para la entrada y salida estándar
using namespace std; // Permite el uso de los nombres de la biblioteca estándar sin el prefijo std::

class Test {
public:
    Test() { cout << "Constructor de la prueba " << endl; } // Constructor que imprime un mensaje
    ~Test() { cout << "Destructor de la prueba " << endl; } // Destructor que imprime un mensaje
};

int main()
{
    try {
        Test t1; // Crea un objeto de la clase Test, invocando el constructor
        throw 10; // Lanza una excepción de tipo int con el valor 10
    }
    catch (int i) {
        cout << "Capturado " << i << endl; // Captura la excepción de tipo int y imprime un mensaje
    }

    // Aquí termina el bloque try-catch
    // El destructor del objeto t1 se invocará automáticamente cuando el control salga del bloque try
    // debido a la excepción lanzada.
}
