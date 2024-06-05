#ifndef ATLETA_H
#define ATLETA_H

#include <string>

class Atleta {
private:
    std::string nombre;
    int numero;
    std::string nacionalidad;
    double tiempo;

public:
    Atleta(const std::string& nombre, int numero, const std::string& nacionalidad, double tiempo);
    std::string getNombre() const;
    double getTiempo() const;
};

#endif // ATLETA_H
