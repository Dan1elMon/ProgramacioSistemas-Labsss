#include "Persona.h"

int main() {
    // Crear un objeto de la clase Persona usando el constructor por defecto
    Persona p1;
    p1.setNombre("Daniel");
    p1.setEdad(22);
    p1.mostrarDetalles();

    // Crear un objeto de la clase Persona usando el constructor parametrizado
    Persona p2("Gabriel", 10);
    p2.mostrarDetalles();

    return 0;
}
