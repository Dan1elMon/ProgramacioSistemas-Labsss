#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
#include <vector>

using namespace std;

class Equipo {
protected:
    string nombre;
    int victorias;
    int derrotas;

public:
    Equipo(const string& nombre, int victorias, int derrotas);
    virtual ~Equipo() = default;

    string getNombre() const;
    virtual int calcularPuntos() const = 0;
    virtual void imprimirDatos() const;
    virtual void ingresarDatos();
};

class EquipoBaloncesto : public Equipo {
private:
    int perdidasBalon;
    int rebotesCogidos;
    string mejorAnotadorTriples;
    int numeroTriples;

public:
    EquipoBaloncesto(const string& nombre, int victorias, int derrotas, int perdidasBalon, int rebotesCogidos, const string& mejorAnotadorTriples, int numeroTriples);

    string getMejorAnotadorTriples() const;
    int getNumeroTriples() const;
    int calcularPuntos() const override;
    void imprimirDatos() const override;
    void ingresarDatos() override;
};

class EquipoFutbol : public Equipo {
private:
    int empates;
    int golesFavor;
    string goleador;
    int numeroGoles;

public:
    EquipoFutbol(const string& nombre, int victorias, int derrotas, int empates, int golesFavor, const string& goleador, int numeroGoles);

    string getGoleador() const;
    int getNumeroGoles() const;
    int calcularPuntos() const override;
    void imprimirDatos() const override;
    void ingresarDatos() override;
};

#endif // EQUIPO_H
