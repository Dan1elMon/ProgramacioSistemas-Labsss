#include <iostream>
using namespace std;

int main() {
    int *x; // Declara un puntero a entero
    int y = 100000000; // Define una gran cantidad de enteros a asignar
    try {
        x = new int[y]; // Intenta asignar memoria para y enteros
        x[0] = 10; // Asigna el valor 10 a la primera posición del arreglo
        cout << "Puntero: " << (void *) x << endl; // Imprime la dirección de memoria del puntero
        delete[] x; // Libera la memoria asignada
    }
    catch(std::bad_alloc&) { // Captura la excepción std::bad_alloc si la asignación de memoria falla
        cout << "Memoria insuficiente" << endl; // Imprime un mensaje de error si no se puede asignar la memoria
    }
    return 0; // Termina la ejecución del programa devolviendo 0 al sistema operativo
}
