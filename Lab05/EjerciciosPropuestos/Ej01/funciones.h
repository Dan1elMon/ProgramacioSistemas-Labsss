#ifndef FUNCIONES_H
#define FUNCIONES_H

struct Fecha {
    int dia;
    int mes;
    int anio;
};

int calcularDiferenciaDias(const Fecha& fecha1, const Fecha& fecha2);
bool esBisiesto(int anio);
int diasDelMes(int mes, int anio);

#endif
