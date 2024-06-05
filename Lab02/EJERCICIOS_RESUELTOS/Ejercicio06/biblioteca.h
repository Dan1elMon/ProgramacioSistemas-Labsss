#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include <string>
using namespace std;

// Programa de C++ para demostrar la declaración de la función fuera de la clase
class Alumnos {
public:
    string NombreAlumno;
    int id;

    // Imprimirnombre no está definida dentro de la definición de la clase
    void Imprimirnombre();

    // Imprimirid está definida dentro de la definición de la clase
    void Imprimirid() {
        cout << "Alumno id es: " << id;
    }
};

#endif // BIBLIOTECA_H
