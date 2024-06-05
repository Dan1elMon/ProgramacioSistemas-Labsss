#include <iostream>
#include "Sala.h"

int main() {
    // Instanciar tres objetos de la clase Sala
    Sala sala1("Sala 1", 12.0, 8.0, true);
    Sala sala2("Sala 2", 20.0, 18.0, false);
    Sala sala3("Sala 3", 15.0, 12.0, true);

    // Imprimir los datos de la primera sala
    std::cout << "Datos de la primera sala:" << std::endl;
    sala1.imprimirDatos();

    // Próximos eventos con número de asistentes
    int asistentes[] = {200, 50, 100, 150};
    Sala salas[] = {sala1, sala2, sala3};

    // Evaluar las salas para cada evento
    for (int i = 0; i < 4; ++i) {
        std::cout << "\nEvento con " << asistentes[i] << " asistentes:" << std::endl;
        bool salaEncontrada = false;
        for (const Sala& sala : salas) {
            if (sala.getCapacidad() >= asistentes[i]) {
                std::cout << "- " << sala.getNombre() << std::endl;
                salaEncontrada = true;
            }
        }
        if (!salaEncontrada) {
            std::cout << "No hay salas disponibles con suficiente capacidad para este evento." << std::endl;
        }
    }

    return 0;
}
