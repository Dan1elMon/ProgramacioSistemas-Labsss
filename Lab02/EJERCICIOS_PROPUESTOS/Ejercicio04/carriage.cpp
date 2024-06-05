#include "Carriage.h"

Carriage::Carriage(bool firstClass) : firstClass(firstClass) {
    std::srand(std::time(nullptr));
    for (int i = 0; i < numSeats; ++i) {
        seats[i] = false; // Todos los asientos inicialmente están vacíos
    }
}

void Carriage::fillSeats() {
    for (int i = 0; i < numSeats; ++i) {
        if ((firstClass && std::rand() % 10 == 0) || (!firstClass && std::rand() % 5 < 2)) {
            seats[i] = true; // Ocupar el asiento con la probabilidad especificada
        }
    }
}

void Carriage::printSeats() const {
    std::cout << "Estado de los asientos en el vagón: ";
    for (int i = 0; i < numSeats; ++i) {
        std::cout << (seats[i] ? "X" : "O") << " ";
    }
    std::cout << std::endl;
}
