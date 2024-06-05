#include "funciones.h"
#include <iostream>
#include <cmath>

void imprimirSubconjunto(const std::vector<int>& conjunto, int bitmask) {
    std::cout << "{ ";
    bool primero = true;
    for (int i = 0; i < conjunto.size(); ++i) {
        if (bitmask & (1 << i)) {
            if (!primero) {
                std::cout << ", ";
            }
            std::cout << conjunto[i];
            primero = false;
        }
    }
    std::cout << " }\n";
}

void generarSubconjuntos(int n) {
    std::vector<int> conjunto(n);
    for (int i = 0; i < n; ++i) {
        conjunto[i] = i + 1;
    }

    int totalSubconjuntos = std::pow(2, n) - 1;
    std::cout << "Todos los subconjuntos no vacíos del conjunto del 1 al " << n << ":\n";
    for (int i = 1; i <= totalSubconjuntos; ++i) {
        imprimirSubconjunto(conjunto, i);
    }
}
