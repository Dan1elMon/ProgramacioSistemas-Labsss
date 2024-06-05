#include "Train.h"

Train::Train(const std::string& departureStation, const std::string& arrivalStation,
             double firstClassTicketPrice, double secondClassTicketPrice, int numCarriages)
    : departureStation(departureStation), arrivalStation(arrivalStation),
      firstClassTicketPrice(firstClassTicketPrice), secondClassTicketPrice(secondClassTicketPrice) {
    for (int i = 0; i < numCarriages; ++i) {
        carriages.push_back(Carriage(i % 2 == 0)); // Alternar entre vagones de primera y segunda clase
    }
}

void Train::fillSeats() {
    for (Carriage& carriage : carriages) {
        carriage.fillSeats();
    }
}

double Train::calculateTotalRevenue() const {
    double totalRevenue = 0.0;
    for (const Carriage& carriage : carriages) {
        for (int i = 0; i < carriage.getNumSeats(); ++i) {
            if (carriage.isSeatOccupied(i)) {
                totalRevenue += carriage.isFirstClass() ? firstClassTicketPrice : secondClassTicketPrice;
            }
        }
    }
    return totalRevenue;
}
