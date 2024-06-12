#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    Fecha fecha1, fecha2;

    cout << "Ingrese la primera fecha (día, mes, año): ";
    cin >> fecha1.dia >> fecha1.mes >> fecha1.anio;
    
    cout << "============================================";

    cout << "Ingrese la segunda fecha (día, mes, año): ";
    cin >> fecha2.dia >> fecha2.mes >> fecha2.anio;

    int diferencia = calcularDiferenciaDias(fecha1, fecha2);

    cout << "La diferencia en días entre las dos fechas es: " << diferencia << " días." << endl;

    return 0;
}
