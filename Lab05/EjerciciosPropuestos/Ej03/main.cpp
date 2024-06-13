#include <iostream>
#include <vector>
#include "clientes.h"

using namespace std;

void listarClientesMorosos(const std::vector<Cliente>& clientes) {
    std::vector<Cliente> morosos = obtenerClientesMorosos(clientes);
    if (morosos.empty()) {
        cout << "No hay clientes morosos." << endl;
    } else {
        cout << "Clientes morosos:" << endl;
        for (const auto& cliente : morosos) {
            imprimirCliente(cliente);
        }
    }
}

void listarClientesPagadosConFacturaMayorA(const std::vector<Cliente>& clientes, double cantidad) {
    std::vector<Cliente> pagados = obtenerClientesPagadosConFacturaMayorA(clientes, cantidad);
    if (pagados.empty()) {
        cout << "No hay clientes pagados con factura mayor a $" << cantidad << "." << endl;
    } else {
        cout << "Clientes pagados con factura mayor a $" << cantidad << ":" << endl;
        for (const auto& cliente : pagados) {
            imprimirCliente(cliente);
        }
    }
}

int main() {
    std::vector<Cliente> clientes;

    // Crear algunos clientes
    clientes.push_back(crearCliente("Cliente 1", 10, 5.0, PAGADO));
    clientes.push_back(crearCliente("Cliente 2", 20, 2.5, ATRASADO));
    clientes.push_back(crearCliente("Cliente 3", 15, 3.0, MOROSO));
    clientes.push_back(crearCliente("Cliente 4", 8, 7.5, PAGADO));
    clientes.push_back(crearCliente("Cliente 5", 30, 1.5, PAGADO));
    clientes.push_back(crearCliente("Cliente 6", 5, 2.0, MOROSO));

    // Listar clientes morosos
    listarClientesMorosos(clientes);

    // Listar clientes pagados con factura mayor a una cantidad específica
    double cantidad;
    cout << "Ingrese la cantidad para listar clientes pagados con factura mayor a dicha cantidad: $";
    cin >> cantidad;
    listarClientesPagadosConFacturaMayorA(clientes, cantidad);

    return 0;
}
