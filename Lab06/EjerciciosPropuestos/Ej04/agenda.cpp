#include "Agenda.h"
#include <iostream>
#include <fstream>

Agenda::Agenda() : numFichas(0) {}

void Agenda::anadirFicha(const Ficha& nuevaFicha) {
    if (numFichas < 100) {
        fichas[numFichas++] = nuevaFicha;
    } else {
        std::cerr << "Agenda completa, no se puede añadir más fichas." << std::endl;
    }
}

void Agenda::visualizarNombres() const {
    for (int i = 0; i < numFichas; ++i) {
        std::cout << fichas[i].nombre << std::endl;
    }
}

void Agenda::mostrarDatosPersona(const std::string& nombre) const {
    for (int i = 0; i < numFichas; ++i) {
        if (fichas[i].nombre == nombre) {
            std::cout << "Nombre: " << fichas[i].nombre << std::endl;
            std::cout << "Dirección: " << fichas[i].direccion << std::endl;
            std::cout << "Teléfono Móvil: " << fichas[i].telefonoMovil << std::endl;
            std::cout << "Email: " << fichas[i].email << std::endl;
            std::cout << "Fecha de Nacimiento: " << fichas[i].diaNacimiento << "/"
                << fichas[i].mesNacimiento << "/" << fichas[i].anoNacimiento << std::endl;
            return;
        }
    }
    std::cout << "Persona no encontrada." << std::endl;
}

void Agenda::leerDesdeFichero(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo, std::ios::binary);
    if (archivo.is_open()) {
        archivo.read(reinterpret_cast<char*>(&numFichas), sizeof(numFichas));
        archivo.read(reinterpret_cast<char*>(fichas), sizeof(Ficha) * numFichas);
        archivo.close();
    }
}

void Agenda::guardarEnFichero(const std::string& nombreArchivo) const {
    std::ofstream archivo(nombreArchivo, std::ios::binary);
    if (archivo.is_open()) {
        archivo.write(reinterpret_cast<const char*>(&numFichas), sizeof(numFichas));
        archivo.write(reinterpret_cast<const char*>(fichas), sizeof(Ficha) * numFichas);
        archivo.close();
    }
}
