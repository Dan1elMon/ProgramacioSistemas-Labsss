#include "Tanque.h"
#include <algorithm>

// Constructor por defecto, inicializa el contenido a 0
Tanque::Tanque() : contenido(0.0) {}

double Tanque::getContenido() const {
    return contenido;
}

void Tanque::agregar(double cantidad) {
    contenido = std::min(contenido + cantidad, static_cast<double>(capacidad));
}

void Tanque::sacar(double cantidad) {
    contenido = std::max(contenido - cantidad, 0.0);
}

void Tanque::sacaMitad() {
    if (contenido > 0) {
        contenido /= 2;
    }
}
