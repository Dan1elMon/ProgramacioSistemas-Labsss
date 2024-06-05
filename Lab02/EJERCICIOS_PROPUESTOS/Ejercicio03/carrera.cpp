#include "Carrera.h"

Carrera::Carrera(const std::vector<Atleta>& competidores)
    : competidores(competidores) {}

Atleta Carrera::getGanador() const {
    Atleta ganador = competidores[0];
    for (const Atleta& atleta : competidores) {
        if (atleta.getTiempo() < ganador.getTiempo()) {
            ganador = atleta;
        }
    }
    return ganador;
}