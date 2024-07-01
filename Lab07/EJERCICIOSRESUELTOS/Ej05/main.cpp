#include <iostream> 
using namespace std; 

void fun(int *ptr, int x)
{
    if (ptr == NULL) // Verifica si el puntero ptr es NULL
        throw ptr; // Lanza una excepción del tipo del puntero

    if (x == 0) // Verifica si x es igual a 0
        throw x; // Lanza una excepción del tipo del entero

    cout << "Afuera de la excepcion"<< endl;
}

int main()
{
    try {
        fun(NULL, 0); // Llama a la función fun() con un puntero NULL y x igual a 0
    }
    catch(...) { // Captura cualquier tipo de excepción lanzada por fun()
        cout << "Capturando la excepción desde fun()" << endl; // Imprime un mensaje indicando que se capturó una excepción
    }

    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
