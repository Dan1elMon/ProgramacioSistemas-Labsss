#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor por defecto
    Persona();

    // Constructor parametrizado
    Persona(const std::string &nombre, int edad);

    // Métodos para establecer y obtener el nombre
    void setNombre(const std::string &nombre);
    std::string getNombre() const;

    // Métodos para establecer y obtener la edad
    void setEdad(int edad);
    int getEdad() const;

    // Método para mostrar los detalles de la persona
    void mostrarDetalles() const;
};

#endif // PERSONA_H
