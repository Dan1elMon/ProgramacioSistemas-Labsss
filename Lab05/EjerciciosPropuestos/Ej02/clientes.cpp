#include "clientes.h"
#include <iostream>

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
    std::cout << "Nombre: " << cliente.nombre << std::endl;
    std::cout << "Unidades solicitadas: " << cliente.unidadesSolicitadas << std::endl;
    std::cout << "Precio por unidad: $" << cliente.precioPorUnidad << std::endl;
    std::cout << "Estado: " << estadoToString(cliente.estado) << std::endl;
    std::cout << "Monto total: $" << calcularMontoTotal(cliente) << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
