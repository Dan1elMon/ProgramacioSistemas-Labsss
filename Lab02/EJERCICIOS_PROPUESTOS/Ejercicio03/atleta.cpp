#include "Atleta.h"

Atleta::Atleta(const std::string& nombre, int numero, const std::string& nacionalidad, double tiempo)
    : nombre(nombre), numero(numero), nacionalidad(nacionalidad), tiempo(tiempo) {}

std::string Atleta::getNombre() const {
    return nombre;
}

double Atleta::getTiempo() const {
    return tiempo;
}
