#include "Sala.h"
#include <iostream>

// Constructor
Sala::Sala(const std::string& nombre, double ancho, double largo, bool equipado)
    : nombre(nombre), ancho(ancho), largo(largo), equipado(equipado) {}

// Obtener la superficie de la sala
double Sala::getSuperficie() const {
    return ancho * largo;
}

// Obtener la capacidad de la sala
double Sala::getCapacidad() const {
    return getSuperficie() / 1.5;
}

// Calcular el costo del alquiler
double Sala::calcularAlquiler() const {
    double costoPorMetro = equipado ? 45.0 : 32.0;
    return getSuperficie() * costoPorMetro;
}

// Obtener el nombre de la sala
std::string Sala::getNombre() const {
    return nombre;
}

// Verificar si la sala está equipada
bool Sala::isEquipado() const {
    return equipado;
}

// Imprimir datos de la sala
void Sala::imprimirDatos() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Ancho: " << ancho << " m" << std::endl;
    std::cout << "Largo: " << largo << " m" << std::endl;
    std::cout << "Equipado: " << (equipado ? "Sí" : "No") << std::endl;
    std::cout << "Superficie: " << getSuperficie() << " m^2" << std::endl;
    std::cout << "Capacidad: " << getCapacidad() << " personas" << std::endl;
    std::cout << "Costo de alquiler: $" << calcularAlquiler() << std::endl;
}
