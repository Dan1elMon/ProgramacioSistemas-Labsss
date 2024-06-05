#include <iostream>

using namespace std;

int main() {
      // Declarar una variable entera 'x' e inicializarla con el valor 10
    int x = 10;

  // Declarar una referencia 'ref' que apunta a la variable 'x'
    int& ref = x;

    // Modificar el valor de 'x' a 20 utilizando la referencia '      ref'
    ref = 20;

    // Imprimir el valor de 'x'
    cout << "x = " << x << endl; // Salida: x = 20

    // Modificar directamente el valor de 'x' a 30
    x = 30;

    // Imprimir el valor de la referencia 'ref', que ahora apunta al nuevo valor de 'x'
    cout << "ref = " << ref << endl; // Salida: ref = 30

    return 0;
}
