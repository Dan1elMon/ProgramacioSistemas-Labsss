#ifndef CLIENTES_H
#define CLIENTES_H

#include <string>

enum Estado {
    MOROSO,
    ATRASADO,
    PAGADO
};

struct Cliente {
    std::string nombre;
    int unidadesSolicitadas;
    double precioPorUnidad;
    Estado estado;
};

Cliente crearCliente(const std::string& nombre, int unidadesSolicitadas, double precioPorUnidad, Estado estado);
double calcularMontoTotal(const Cliente& cliente);
std::string estadoToString(Estado estado);
void imprimirCliente(const Cliente& cliente);

#endif // CLIENTES_H
