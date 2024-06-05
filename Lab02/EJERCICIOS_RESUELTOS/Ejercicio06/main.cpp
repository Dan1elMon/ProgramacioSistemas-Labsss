#include "biblioteca.h"

int main() {
    Alumnos obj1;
    obj1.NombreAlumno = "Daniek";
    obj1.id = 20200593;

    // Llamando a Imprimirnombre()
    obj1.Imprimirnombre();
    cout << endl;

    // Llamando a Imprimirid()
    obj1.Imprimirid();

    return 0;
}
