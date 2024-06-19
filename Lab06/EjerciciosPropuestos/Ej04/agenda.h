#ifndef AGENDA_H
#define AGENDA_H

#include <string>

struct Ficha {
    std::string nombre;
    std::string direccion;
    std::string telefonoMovil;
    std::string email;
    short diaNacimiento;
    short mesNacimiento;
    short anoNacimiento;
};

class Agenda {
private:
    Ficha fichas[100];
    int numFichas;

public:
    Agenda();
    void anadirFicha(const Ficha& nuevaFicha);
    void visualizarNombres() const;
    void mostrarDatosPersona(const std::string& nombre) const;
    void leerDesdeFichero(const std::string& nombreArchivo);
    void guardarEnFichero(const std::string& nombreArchivo) const;
};

#endif // AGENDA_H
