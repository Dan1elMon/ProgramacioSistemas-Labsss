#include <iostream>
#include "Train.h"

int main() {
    Train train("Estación A", "Estación B", 100.0, 50.0, 5);

    train.fillSeats();

    std::cout << "Total de ingresos por ventas de tickets: $" << train.calculateTotalRevenue() << std::endl;

    return 0;
}
