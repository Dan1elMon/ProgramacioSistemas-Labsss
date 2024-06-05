#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// Programa en C++ para explicar los destructores
class Alumnos {
public:
    int id;

    // Definición de destructor
    ~Alumnos() {
        cout << "Destructor llamado por id: " << id << endl;
    }
};

#endif // BIBLIOTECA_H
