#include "candado.h"

Candado::Candado(int digito1, int digito2, int digito3) {
    combinacionSeguridad[0] = digito1;
    combinacionSeguridad[1] = digito2;
    combinacionSeguridad[2] = digito3;

    combinacionActual[0] = digito1;
    combinacionActual[1] = digito2;
    combinacionActual[2] = digito3;
}

void Candado::cambiarDigito(int posicion, int nuevoDigito) {
    if (posicion >= 0 && posicion < 3) {
        combinacionActual[posicion] = nuevoDigito;
    }
}

bool Candado::puedeAbrir() const {
    return combinacionActual[0] == combinacionSeguridad[0] &&
           combinacionActual[1] == combinacionSeguridad[1] &&
           combinacionActual[2] == combinacionSeguridad[2];
}

bool Candado::mismaCombinacionActual(const Candado& otroCandado) const {
    return combinacionActual[0] == otroCandado.combinacionActual[0] &&
           combinacionActual[1] == otroCandado.combinacionActual[1] &&
           combinacionActual[2] == otroCandado.combinacionActual[2];
}
