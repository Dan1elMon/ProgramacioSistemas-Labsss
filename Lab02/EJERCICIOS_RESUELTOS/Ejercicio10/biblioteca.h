#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// Programa en C++ para explicar una simple herencia

// Clase base
class Vehiculo {
public:
    Vehiculo() {
        cout << "Este es un vehiculo" << endl;
    }
};

// La subclase derivada de la clase base
class Carro : public Vehiculo {
public:
    Carro() {
        cout << "Este es un carro" << endl;
    }
};

#endif // BIBLIOTECA_H
