// funciones.cpp

#include "funciones.h"

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int diasEnMes(int mes, int anio) {
    switch (mes) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return esBisiesto(anio) ? 29 : 28;
        default:
            return 31;
    }
}

int diasDesdeInicio(const Fecha& fecha) {
    int totalDias = 0;

    // Días completos de los años anteriores
    for (int anio = 1; anio < fecha.anio; ++anio) {
        totalDias += esBisiesto(anio) ? 366 : 365;
    }

    // Días completos de los meses anteriores en el año actual
    for (int mes = 1; mes < fecha.mes; ++mes) {
        totalDias += diasEnMes(mes, fecha.anio);
    }

    // Días en el mes actual
    totalDias += fecha.dia;

    return totalDias;
}

int calcularDiferencia(const Fecha& fecha1, const Fecha& fecha2) {
    int diasFecha1 = diasDesdeInicio(fecha1);
    int diasFecha2 = diasDesdeInicio(fecha2);
    return std::abs(diasFecha2 - diasFecha1);
}
