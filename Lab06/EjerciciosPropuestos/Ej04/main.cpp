#include "Agenda.h"
#include <iostream>

void mostrarMenu() {
    std::cout << "1. Añadir nueva ficha" << std::endl;
    std::cout << "2. Visualizar nombres de las fichas" << std::endl;
    std::cout << "3. Mostrar datos de una persona" << std::endl;
    std::cout << "4. Salir" << std::endl;
}

Ficha crearFicha() {
    Ficha ficha;
    std::cout << "Introduce el nombre: ";
    std::getline(std::cin, ficha.nombre);
    std::cout << "Introduce la dirección: ";
    std::getline(std::cin, ficha.direccion);
    std::cout << "Introduce el teléfono móvil: ";
    std::getline(std::cin, ficha.telefonoMovil);
    std::cout << "Introduce el email: ";
    std::getline(std::cin, ficha.email);
    std::cout << "Introduce el día de nacimiento: ";
    std::cin >> ficha.diaNacimiento;
    std::cout << "Introduce el mes de nacimiento: ";
    std::cin >> ficha.mesNacimiento;
    std::cout << "Introduce el año de nacimiento: ";
    std::cin >> ficha.anoNacimiento;
    std::cin.ignore(); // Limpiar el buffer de entrada
    return ficha;
}

int main() {
    Agenda agenda;
    agenda.leerDesdeFichero("agenda.dat");

    int opcion;
    do {
        mostrarMenu();
        std::cout << "Selecciona una opción: ";
        std::cin >> opcion;
        std::cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: {
                Ficha nuevaFicha = crearFicha();
                agenda.anadirFicha(nuevaFicha);
                break;
            }
            case 2:
                agenda.visualizarNombres();
                break;
            case 3: {
                std::string nombre;
                std::cout << "Introduce el nombre de la persona: ";
                std::getline(std::cin, nombre);
                agenda.mostrarDatosPersona(nombre);
                break;
            }
            case 4:
                agenda.guardarEnFichero("agenda.dat");
                std::cout << "Datos guardados. Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida, por favor intenta de nuevo." << std::endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}
