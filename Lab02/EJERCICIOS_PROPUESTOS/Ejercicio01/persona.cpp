#include "Persona.h"

// Constructor por defecto
Persona::Persona() : nombre(""), edad(0) {}

// Constructor parametrizado
Persona::Persona(const std::string &nombre, int edad) : nombre(nombre), edad(edad) {}

// Establecer el nombre
void Persona::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

// Obtener el nombre
std::string Persona::getNombre() const {
    return nombre;
}

// Establecer la edad
void Persona::setEdad(int edad) {
    this->edad = edad;
}

// Obtener la edad
int Persona::getEdad() const {
    return edad;
}

// Mostrar los detalles de la persona
void Persona::mostrarDetalles() const {
    std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
}
