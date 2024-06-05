#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// Clase base
class Vehiculo {
public:
    Vehiculo() {
        cout << "Este es un vehiculo" << endl;
    }
};

// Clase base
class Faro {
public:
    Faro() {
        cout << "Faro del vehiculo" << endl;
    }
};

// Primera subclase derivada de Vehiculo
class Carro : public Vehiculo {
public:
    Carro() {
        cout << "Este es un carro" << endl;
    }
};

// Segunda subclase derivada de Vehiculo y Faro
class Bus : public Vehiculo, public Faro {
public:
    Bus() {
        cout << "Este es un bus" << endl;
    }
};

#endif // BIBLIOTECA_H
