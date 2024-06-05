#ifndef TRAIN_H
#define TRAIN_H

#include "Carriage.h"
#include <vector>
#include <string> // Incluir string para el uso de std::string

class Train {
private:
    std::vector<Carriage> carriages;
    double firstClassTicketPrice;
    double secondClassTicketPrice;
    std::string departureStation;
    std::string arrivalStation;

public:
    Train(const std::string& departureStation, const std::string& arrivalStation,
          double firstClassTicketPrice, double secondClassTicketPrice, int numCarriages);
    void fillSeats();
    double calculateTotalRevenue() const;
};

#endif // TRAIN_H
