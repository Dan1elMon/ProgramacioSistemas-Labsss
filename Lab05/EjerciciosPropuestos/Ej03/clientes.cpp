#include "clientes.h"
#include <iostream>
#include <cstdlib> // Para incluir abs

using namespace std;

Cliente crearCliente(const std::string& nombre, int unidadesSolicitadas, double precioPorUnidad, Estado estado) {
    Cliente cliente;
    cliente.nombre = nombre;
    cliente.unidadesSolicitadas = unidadesSolicitadas;
    cliente.precioPorUnidad = precioPorUnidad;
    cliente.estado = estado;
    return cliente;
}

double calcularMontoTotal(const Cliente& cliente) {
    return cliente.unidadesSolicitadas * cliente.precioPorUnidad;
}

std::string estadoToString(Estado estado) {
    switch (estado) {
        case MOROSO:
            return "Moroso";
        case ATRASADO:
            return "Atrasado";
        case PAGADO:
            return "Pagado";
        default:
            return "Desconocido";
    }
}

void imprimirCliente(const Cliente& cliente) {
    cout << "Nombre: " << cliente.nombre << endl;
    cout << "Unidades solicitadas: " << cliente.unidadesSolicitadas << endl;
    cout << "Precio por unidad: $" << cliente.precioPorUnidad << endl;
    cout << "Estado: " << estadoToString(cliente.estado) << endl;
    cout << "Monto total: $" << calcularMontoTotal(cliente) << endl;
    cout << "-----------------------------" << endl;
}

std::vector<Cliente> obtenerClientesMorosos(const std::vector<Cliente>& clientes) {
    std::vector<Cliente> morosos;
    for (const auto& cliente : clientes) {
        if (cliente.estado == MOROSO) {
            morosos.push_back(cliente);
        }
    }
    return morosos;
}

std::vector<Cliente> obtenerClientesPagadosConFacturaMayorA(const std::vector<Cliente>& clientes, double cantidad) {
    std::vector<Cliente> pagados;
    for (const auto& cliente : clientes) {
        if (cliente.estado == PAGADO && calcularMontoTotal(cliente) > cantidad) {
            pagados.push_back(cliente);
        }
    }
    return pagados;
}
