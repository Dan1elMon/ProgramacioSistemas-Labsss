#include <iostream>
#include <vector>
#include "Carrera.h"

int main() {
    Atleta atleta1("Juan", 1, "Argentina", 12.5);
    Atleta atleta2("Carlos", 2, "Brasil", 11.8);
    Atleta atleta3("Luis", 3, "Chile", 11.9);

    std::vector<Atleta> competidores = {atleta1, atleta2, atleta3};

    Carrera carrera(competidores);
    Atleta ganador = carrera.getGanador();

    std::cout << "El atleta más rápido es: " << ganador.getNombre() << std::endl;
    std::cout << "Tiempo: " << ganador.getTiempo() << std::endl;

    return 0;
}
