#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// Programa en C++ para demostrar la implementación de herencia

// Clase base
class Padre {
public:
    int id_p;
};

// Subclase que hereda de la clase Padre
class Hijo : public Padre {
public:
    int id_c;
};

#endif // BIBLIOTECA_H
