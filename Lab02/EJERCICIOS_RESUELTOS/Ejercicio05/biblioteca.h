#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include <string>
using namespace std;

class Alumnos
{
public:
    // datos de la clase miembro
    string NombreAlumno;
    
    // Funciones miembros
    void imprimirNombre() const;
};

#endif // BIBLIOTECA_H
