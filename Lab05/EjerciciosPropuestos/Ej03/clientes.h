#ifndef CLIENTES_H
#define CLIENTES_H

#include <string>
#include <vector>

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
std::vector<Cliente> obtenerClientesMorosos(const std::vector<Cliente>& clientes);
std::vector<Cliente> obtenerClientesPagadosConFacturaMayorA(const std::vector<Cliente>& clientes, double cantidad);

#endif // CLIENTES_H
