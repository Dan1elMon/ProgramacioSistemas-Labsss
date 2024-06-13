// funciones.h

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <cmath>

struct Fecha {
    int dia;
    int mes;
    int anio;
};

bool esBisiesto(int anio);
int diasEnMes(int mes, int anio);
int diasDesdeInicio(const Fecha& fecha);
int calcularDiferencia(const Fecha& fecha1, const Fecha& fecha2);

#endif // FUNCIONES_H
