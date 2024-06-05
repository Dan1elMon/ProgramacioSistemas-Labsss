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
class CuatroRuedas : public Vehiculo {
public:
    CuatroRuedas() {
        cout << "Objeto con cuatro ruedas son vehiculos" << endl;
    }
};

// Subclase derivada de la clase CuatroRuedas
class Carro : public CuatroRuedas {
public:
    Carro() {
        cout << "Carro tiene 4 ruedas" << endl;
    }
};

#endif // BIBLIOTECA_H
