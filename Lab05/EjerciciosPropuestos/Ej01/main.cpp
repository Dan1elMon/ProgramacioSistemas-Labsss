// main.cpp

#include <iostream>
#include "funciones.h"

int main() {
    Fecha fecha1 = {1, 1, 2023}; // Primera fecha (día, mes, año)
    Fecha fecha2 = {15, 6, 2024}; // Segunda fecha (día, mes, año)

    std::cout << "Primera fecha: " << fecha1.dia << "/" << fecha1.mes << "/" << fecha1.anio << std::endl;
    std::cout << "Segunda fecha: " << fecha2.dia << "/" << fecha2.mes << "/" << fecha2.anio << std::endl;

    int diferencia = calcularDiferencia(fecha1, fecha2);
    std::cout << "Días entre las fechas: " << diferencia << std::endl;

    return 0;
}
