#include <iostream>
using namespace std;

void swap(int& primero, int& segundo) {
    // Declaramos la variable temoral y le asignamos el valor primero
    int temporal = primero;

    // asignamos el valor de segndo a primero
    primero = segundo;

    // asignamos el valor almacenado en tempral a segundo
    segundo = temporal;
}

int main() {
    // declaramos dos variables enteras
    int a = 2, b = 3;
    cout << a << " " << b<<endl; // Output:2 3

    // llamamos la funcion swap para intercambiar los valores
    swap(a, b);

    // imprimimos los valores intercambiados
    cout << a << " " << b; // Output: 3 2

    return 0;
}
