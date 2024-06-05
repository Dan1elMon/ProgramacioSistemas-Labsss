#include <iostream>
#include "candado.h"

int main() {
    // Crear dos objetos de tipo Candado
    Candado c1(1, 2, 3);
    Candado c2(4, 5, 6);

    // Cambiar un dígito de la combinación actual de c1
    c1.cambiarDigito(1, 9);

    // Comprobar si c2 puede abrirse con la combinación actual de c1
    if (c2.puedeAbrir()) {
        std::cout << "El candado c2 se puede abrir con la combinacion actual de c1." << std::endl;
    } else {
        std::cout << "El candado c2 no se puede abrir con la combinacion actual de c1." << std::endl;
    }

    // Comprobar si c1 y c2 tienen las mismas combinaciones actuales
    if (c1.mismaCombinacionActual(c2)) {
        std::cout << "Los candados c1 y c2 tienen las mismas combinaciones actuales." << std::endl;
    } else {
        std::cout << "Los candados c1 y c2 no tienen las mismas combinaciones actuales." << std::endl;
    }

    return 0;
}
