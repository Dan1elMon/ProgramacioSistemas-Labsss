#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
using namespace std;

// Clase base
class Vehiculo {
public:
    Vehiculo() {
        cout << "Esto es un vehiculo" << endl;
    }
};

// Primera subclase derivada de la clase Vehiculo
class Carro : public Vehiculo {
public:
    Carro() {
        cout << "Esto es un carro" << endl;
    }
};

// Segunda subclase derivada de la clase Vehiculo
class Bus : public Vehiculo {
public:
    Bus() {
        cout << "Esto es un bus" << endl;
    }
};

#endif // BIBLIOTECA_H
