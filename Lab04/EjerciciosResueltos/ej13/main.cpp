#include <iostream>

using namespace std;
int main() {
    // Declaramos e arreglo y lo inicializamos
    int arr[] = {10, 20, 30, 40, 50, 60};

    // Declaramos el puntero y lo direccionamos al primer elemento del arreglo
    int* ptr = arr;

    // imprimimos el primer elemento del arreglo
    cout << "Valor del primer elemento es " << *ptr << endl; // Output: Valor del primer elemento es 10

    // imprimimos la direccion de memoria del arreglo
    cout << "Valor del arreglo es " << arr << endl; // Output: Valor del arreglo es 0x7ffdf1234567 (address of the array)

    return 0;
}
