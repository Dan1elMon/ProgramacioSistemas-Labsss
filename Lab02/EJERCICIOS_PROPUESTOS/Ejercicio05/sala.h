#ifndef SALA_H
#define SALA_H

#include <string>

class Sala {
private:
    std::string nombre;
    double ancho;
    double largo;
    bool equipado;

public:
    Sala(const std::string& nombre, double ancho, double largo, bool equipado);

    double getSuperficie() const;
    double getCapacidad() const;
    double calcularAlquiler() const;
    std::string getNombre() const;
    bool isEquipado() const;
    void imprimirDatos() const;
};

#endif // SALA_H
