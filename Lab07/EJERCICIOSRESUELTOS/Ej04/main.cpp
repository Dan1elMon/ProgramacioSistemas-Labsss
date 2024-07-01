#include <iostream>
using namespace std;
int main()
{
    try {
        throw 'a'; // Lanza una excepción de tipo char con el valor 'a'
    }
    catch (int x) { // Intenta capturar una excepción de tipo entero (int)
        cout << "Capturado  " << x;
    }
    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
