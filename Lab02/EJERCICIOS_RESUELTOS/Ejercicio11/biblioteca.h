#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// C++ programa para explicar Herencia Múltiple

// Primera clase base
class Vehiculo {
public:
    Vehiculo() {
        cout << "Este es un vehiculo" << endl;
    }
};

// Segunda clase base
class CuatroRuedas {
public:
    CuatroRuedas() {
        cout << "Este es un vehiculo de cuatro ruedas" << endl;
    }
};

// Clase derivada que hereda de ambas clases base
class Carro : public Vehiculo, public CuatroRuedas {
public:
    Carro() {
        cout << "Este es un carro" << endl;
    }
};

#endif // BIBLIOTECA_H
