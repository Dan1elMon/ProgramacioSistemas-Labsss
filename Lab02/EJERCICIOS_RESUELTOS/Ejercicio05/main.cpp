#include "biblioteca.h"

int main() {
    // Declara un objeto de la clase Alumnos
    Alumnos obj1;
    
    // Accediendo a los datos de la clase miembro
    obj1.NombreAlumno = "Gabriel";
    
    // Accediendo a la función de la clase miembro
    obj1.imprimirNombre();
    
    return 0;
}
