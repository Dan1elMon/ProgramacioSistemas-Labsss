#include "biblioteca.h"

int main() {
    Hijo obj;

    // Accediendo a los miembros de la clase Padre
    obj.id_p = 1;
    cout << "ID del Padre: " << obj.id_p << endl;

    // Accediendo a los miembros de la clase Hijo
    obj.id_c = 2;
    cout << "ID del Hijo: " << obj.id_c << endl;

    return 0;
}
