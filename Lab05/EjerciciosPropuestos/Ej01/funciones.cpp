#include "funciones.h"
#include <cmath>
#include <ctime>

bool esBisiesto(int anio) {
    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int diasDelMes(int mes, int anio) {
    switch (mes) {
        case 1: return 31;
        case 2: return esBisiesto(anio) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

int calcularDiferenciaDias(const Fecha& fecha1, const Fecha& fecha2) {
    struct std::tm a = {0,0,0,fecha1.dia,fecha1.mes-1,fecha1.anio-1900};
    struct std::tm b = {0,0,0,fecha2.dia,fecha2.mes-1,fecha2.anio-1900};
    std::time_t x = std::mktime(&a);
    std::time_t y = std::mktime(&b);
    double difference = std::difftime(y, x) / (60 * 60 * 24);
    return std::abs(difference);
}
