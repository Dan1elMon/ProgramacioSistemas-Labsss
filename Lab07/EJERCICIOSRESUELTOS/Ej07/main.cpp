#include <iostream>
using namespace std;

int main()
{
    try { // Primer bloque try-catch
        try { // Segundo bloque try-catch
            throw 20; // Lanza una excepción de tipo int con el valor 20
        }
        catch (int n) { // Captura la excepción de tipo int en el segundo bloque try
            cout << "Manejado parcialmente " <<endl; // Imprime un mensaje indicando manejo parcial
            throw; // Relanza la misma excepción para que sea capturada por un bloque catch externo
        }
    }
    catch (int n) { // Captura la excepción relanzada por el bloque catch interno
        cout << "Manejando el resto " <<endl; // Imprime un mensaje indicando manejo completo
    }
    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
