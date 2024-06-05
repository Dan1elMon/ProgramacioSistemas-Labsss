#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// Programa en C++ para demostrar los constructores
class Alumnos {
public:
    int id;

    // Constructor por defecto
    Alumnos() {
        cout << "Constructor por defecto llamado" << endl;
        id = -1;
    }

    // Constructor parametrizado
    Alumnos(int x) {
        cout << "Constructor parametrizado llamado" << endl;
        id = x;
    }
};

#endif // BIBLIOTECA_H
