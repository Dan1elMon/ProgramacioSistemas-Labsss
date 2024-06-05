#ifndef CARRIAGE_H
#define CARRIAGE_H

#include <cstdlib>
#include <ctime>
#include <iostream>

class Carriage {
private:
    static const int numSeats = 40;
    bool seats[numSeats];
    bool firstClass;

public:
    Carriage(bool firstClass);
    void fillSeats();
    void printSeats() const;

    // Añadir getters para permitir el acceso seguro a los atributos
    int getNumSeats() const { return numSeats; }
    bool isFirstClass() const { return firstClass; }
    bool isSeatOccupied(int index) const { return seats[index]; }
};

#endif // CARRIAGE_H
