#include "equipo.h"
#include <iostream>

using namespace std;

Equipo::Equipo(const string& nombre, int victorias, int derrotas)
    : nombre(nombre), victorias(victorias), derrotas(derrotas) {}

void Equipo::imprimirDatos() const {
    cout << "Nombre del equipo: " << nombre << endl;
    cout << "Victorias: " << victorias << endl;
    cout << "Derrotas: " << derrotas << endl;
}

void Equipo::ingresarDatos() {
    cout << "Ingrese el nombre del equipo: ";
    cin >> nombre;
    cout << "Ingrese el número de victorias: ";
    cin >> victorias;
    cout << "Ingrese el número de derrotas: ";
    cin >> derrotas;
}

EquipoBaloncesto::EquipoBaloncesto(const string& nombre, int victorias, int derrotas, int perdidasBalon, int rebotesCogidos, const string& mejorAnotadorTriples, int numeroTriples)
    : Equipo(nombre, victorias, derrotas), perdidasBalon(perdidasBalon), rebotesCogidos(rebotesCogidos), mejorAnotadorTriples(mejorAnotadorTriples), numeroTriples(numeroTriples) {}

void EquipoBaloncesto::imprimirDatos() const {
    Equipo::imprimirDatos();
    cout << "Pérdidas de balón: " << perdidasBalon << endl;
    cout << "Rebotes cogidos: " << rebotesCogidos << endl;
    cout << "Mejor anotador de triples: " << mejorAnotadorTriples << endl;
    cout << "Número de triples del mejor anotador: " << numeroTriples << endl;
}

void EquipoBaloncesto::ingresarDatos() {
    Equipo::ingresarDatos();
    cout << "Ingrese el número de pérdidas de balón: ";
    cin >> perdidasBalon;
    cout << "Ingrese el número de rebotes cogidos: ";
    cin >> rebotesCogidos;
    cout << "Ingrese el nombre del mejor anotador de triples: ";
    cin >> mejorAnotadorTriples;
    cout << "Ingrese el número de triples del mejor anotador: ";
    cin >> numeroTriples;
}

EquipoFutbol::EquipoFutbol(const string& nombre, int victorias, int derrotas, int empates, int golesFavor, const string& goleador, int numeroGoles)
    : Equipo(nombre, victorias, derrotas), empates(empates), golesFavor(golesFavor), goleador(goleador), numeroGoles(numeroGoles) {}

void EquipoFutbol::imprimirDatos() const {
    Equipo::imprimirDatos();
    cout << "Empates: " << empates << endl;
    cout << "Goles a favor: " << golesFavor << endl;
    cout << "Goleador del equipo: " << goleador << endl;
    cout << "Número de goles del goleador: " << numeroGoles << endl;
}

void EquipoFutbol::ingresarDatos() {
    Equipo::ingresarDatos();
    cout << "Ingrese el número de empates: ";
    cin >> empates;
    cout << "Ingrese el número de goles a favor: ";
    cin >> golesFavor;
    cout << "Ingrese el nombre del goleador del equipo: ";
    cin >> goleador;
    cout << "Ingrese el número de goles del goleador: ";
    cin >> numeroGoles;
}
