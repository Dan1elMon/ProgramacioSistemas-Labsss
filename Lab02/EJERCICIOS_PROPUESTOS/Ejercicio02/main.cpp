#include <iostream>
#include "Tanque.h"

int main() {
    // Crear un objeto de la clase Tanque
    Tanque t;
    
    // Agregar 100 unidades al tanque   
    t.agregar(5000.0);
    std::cout << "Contenido inicial del tanque: " << t.getContenido() << std::endl;

    while (t.getContenido() >= 1.0) {
        t.sacaMitad();
        std::cout << "Contenido actual del tanque: " << t.getContenido() << std::endl;
    }

    return 0;
}
