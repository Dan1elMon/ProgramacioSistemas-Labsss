#include "funciones.h"
#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "n debe ser un número entero positivo." << std::endl;
        return 1;
    }

    generarSubconjuntos(n);

    return 0;
}
