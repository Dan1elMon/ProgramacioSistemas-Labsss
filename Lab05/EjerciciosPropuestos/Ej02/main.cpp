#include <iostream>
#include <vector>
#include "clientes.h"

int main() {
    std::vector<Cliente> clientes;

    // Crear algunos clientes
    clientes.push_back(crearCliente("Cliente 1", 10, 5.0, PAGADO));
    clientes.push_back(crearCliente("Cliente 2", 20, 2.5, ATRASADO));
    clientes.push_back(crearCliente("Cliente 3", 15, 3.0, MOROSO));
    clientes.push_back(crearCliente("Cliente 4", 8, 7.5, PAGADO));

    // Imprimir los detalles de cada cliente
    for (const auto& cliente : clientes) {
        imprimirCliente(cliente);
    }

    return 0;
}
