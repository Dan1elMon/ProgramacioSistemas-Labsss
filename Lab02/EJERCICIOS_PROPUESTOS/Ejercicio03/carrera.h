#ifndef CARRERA_H
#define CARRERA_H

#include "Atleta.h"
#include <vector>

class Carrera {
private:
    std::vector<Atleta> competidores;

public:
    Carrera(const std::vector<Atleta>& competidores);
    Atleta getGanador() const;
};

#endif // CARRERA_H
