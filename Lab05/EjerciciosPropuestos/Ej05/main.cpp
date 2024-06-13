#include <iostream>
#include <vector>
#include <algorithm>
#include "equipo.h"

using namespace std;

void ingresarEquipos(vector<Equipo*>& equipos) {
    // Datos predeterminados para equipos de baloncesto
    EquipoBaloncesto* equipoBaloncesto1 = new EquipoBaloncesto("Equipo Baloncesto 1", 10, 5, 20, 30, "Jugador1", 15);
    equipos.push_back(equipoBaloncesto1);

    EquipoBaloncesto* equipoBaloncesto2 = new EquipoBaloncesto("Equipo Baloncesto 2", 8, 7, 15, 25, "Jugador2", 12);
    equipos.push_back(equipoBaloncesto2);

    // Datos predeterminados para equipos de fútbol
    EquipoFutbol* equipoFutbol1 = new EquipoFutbol("Equipo Futbol 1", 12, 3, 2, 30, "Goleador1", 20);
    equipos.push_back(equipoFutbol1);

    EquipoFutbol* equipoFutbol2 = new EquipoFutbol("Equipo Futbol 2", 9, 5, 4, 25, "Goleador2", 18);
    equipos.push_back(equipoFutbol2);
}

void imprimirEquipos(const vector<Equipo*>& equipos) {
    for (const auto& equipo : equipos) {
        equipo->imprimirDatos();
        cout << endl;
    }
}

void listarMejoresAnotadoresTriples(const vector<Equipo*>& equipos) {
    cout << "Mejores anotadores de triples:" << endl;
    for (const auto& equipo : equipos) {
        const EquipoBaloncesto* baloncesto = dynamic_cast<const EquipoBaloncesto*>(equipo);
        if (baloncesto) {
            cout << baloncesto->getNombre() << ": " << baloncesto->getMejorAnotadorTriples() << " con " << baloncesto->getNumeroTriples() << " triples" << endl;
        }
    }
}

void maximoGoleador(const vector<Equipo*>& equipos) {
    const EquipoFutbol* maxGoleadorEquipo = nullptr;
    int maxGoles = 0;

    for (const auto& equipo : equipos) {
        const EquipoFutbol* futbol = dynamic_cast<const EquipoFutbol*>(equipo);
        if (futbol && futbol->getNumeroGoles() > maxGoles) {
            maxGoles = futbol->getNumeroGoles();
            maxGoleadorEquipo = futbol;
        }
    }

    if (maxGoleadorEquipo) {
        cout << "Máximo goleador de la liga de fútbol: " << maxGoleadorEquipo->getGoleador() << "
    cout << " con " << maxGoleadorEquipo->getNumeroGoles() << " goles" << endl;
    }
}

void equipoGanadorFutbol(const vector<Equipo*>& equipos) {
    const EquipoFutbol* equipoGanador = nullptr;
    int maxPuntos = 0;

    for (const auto& equipo : equipos) {
        const EquipoFutbol* futbol = dynamic_cast<const EquipoFutbol*>(equipo);
        if (futbol) {
            int puntos = futbol->calcularPuntos();
            if (puntos > maxPuntos) {
                maxPuntos = puntos;
                equipoGanador = futbol;
            }
        }
    }

    if (equipoGanador) {
        cout << "Equipo ganador de la liga de fútbol: " << equipoGanador->getNombre() << " con " << maxPuntos << " puntos" << endl;
    }
}

void equipoGanadorBaloncesto(const vector<Equipo*>& equipos) {
    const EquipoBaloncesto* equipoGanador = nullptr;
    int maxPuntos = 0;

    for (const auto& equipo : equipos) {
        const EquipoBaloncesto* baloncesto = dynamic_cast<const EquipoBaloncesto*>(equipo);
        if (baloncesto) {
            int puntos = baloncesto->calcularPuntos();
            if (puntos > maxPuntos) {
                maxPuntos = puntos;
                equipoGanador = baloncesto;
            }
        }
    }

    if (equipoGanador) {
        cout << "Equipo ganador de la liga de baloncesto: " << equipoGanador->getNombre() << " con " << maxPuntos << " puntos" << endl;
    }
}

int main() {
    vector<Equipo*> equipos;

    // Ingresar datos predeterminados
    ingresarEquipos(equipos);

    // Imprimir datos de todos los equipos
    cout << "Datos de todos los equipos:" << endl;
    imprimirEquipos(equipos);
    cout << endl;

    // Listado de los mejores anotadores de triples de cada equipo
    listarMejoresAnotadoresTriples(equipos);
    cout << endl;

    // Máximo goleador de la liga de fútbol
    maximoGoleador(equipos);
    cout << endl;

    // Equipo ganador de la liga de fútbol
    equipoGanadorFutbol(equipos);
    cout << endl;

    // Equipo ganador de la liga de baloncesto
    equipoGanadorBaloncesto(equipos);
    cout << endl;

    // Liberar memoria de los equipos
    for (auto& equipo : equipos) {
        delete equipo;
    }

    return 0;
}
