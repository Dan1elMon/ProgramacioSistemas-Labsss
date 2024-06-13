#include <iostream>
#include <vector>
#include "equipo.h"

using namespace std;

void ingresarEquipos(vector<Equipo*>& equipos) {
    int numEquipos;
    cout << "Ingrese el número de equipos: ";
    cin >> numEquipos;

    for (int i = 0; i < numEquipos; ++i) {
        int tipoEquipo;
        cout << "Ingrese el tipo de equipo (1 para baloncesto, 2 para futbol): ";
        cin >> tipoEquipo;

        if (tipoEquipo == 1) {
            EquipoBaloncesto* equipo = new EquipoBaloncesto("", 0, 0, 0, 0, "", 0);
            equipo->ingresarDatos();
            equipos.push_back(equipo);
        } else if (tipoEquipo == 2) {
            EquipoFutbol* equipo = new EquipoFutbol("", 0, 0, 0, 0, "", 0);
            equipo->ingresarDatos();
            equipos.push_back(equipo);
        } else {
            cout << "Tipo de equipo no válido." << endl;
        }
    }
}

void imprimirEquipos(const vector<Equipo*>& equipos) {
    for (const auto& equipo : equipos) {
        equipo->imprimirDatos();
        cout << endl;
    }
}

void liberarMemoria(vector<Equipo*>& equipos) {
    for (auto& equipo : equipos) {
        delete equipo;
    }
    equipos.clear();
}

int main() {
    vector<Equipo*> equipos;

    ingresarEquipos(equipos);
    imprimirEquipos(equipos);
    liberarMemoria(equipos);

    return 0;
}
