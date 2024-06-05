#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_TOWERS = 7;
const int NUM_FLOORS_PER_TOWER = 20;
const int NUM_APARTMENTS_PER_FLOOR = 6;

// Funcion para inincializar con datos aleatorios
void initializeHabitantes(vector<vector<vector<int>>>& Habitantes) {
    srand(time(NULL)); // Seed the random number generator

    for (int tower = 0; tower < NUM_TOWERS; tower++) {
        for (int floor = 0; floor < NUM_FLOORS_PER_TOWER; floor++) {
        for (int apartment = 0; apartment < NUM_APARTMENTS_PER_FLOOR; apartment++) {
            Habitantes[tower][floor][apartment] = rand() % 4;
        }
        }
    }
    }

// funcion para calcular el nmero total de habitantes

int calculateTotalHabitantes(const vector<vector<vector<int>>>& Habitantes) {
    int total = 0;
    for (int tower = 0; tower < NUM_TOWERS; tower++) {
        for (int floor = 0; floor < NUM_FLOORS_PER_TOWER; floor++) {
        for (int apartment = 0; apartment < NUM_APARTMENTS_PER_FLOOR; apartment++) {
            total += Habitantes[tower][floor][apartment];
        }
        }
    }
    return total;
}

// funcion para calcular los habiates promedio por piso
double calcularMediaPorPiso(const vector<vector<int>>& tower) {
    int floorTotal = 0;
    for (int floor = 0; floor < NUM_FLOORS_PER_TOWER; floor++) {
        for (int apartment = 0; apartment < NUM_APARTMENTS_PER_FLOOR; apartment++) {
        floorTotal += tower[floor][apartment];
        }
    }
    return (double) floorTotal / NUM_APARTMENTS_PER_FLOOR;
}

// funcion para calcular media de habitante sportorre
double calcularMediaPorTorre(const vector<vector<vector<int>>>& Habitantes, int towerIndex) {
    int totalTorres = 0;
    for (int floor = 0; floor < NUM_FLOORS_PER_TOWER; floor++) {
        for (int apartment = 0; apartment < NUM_APARTMENTS_PER_FLOOR; apartment++) {
        totalTorres += Habitantes[towerIndex][floor][apartment];
        }
    }
    return (double) totalTorres / (NUM_FLOORS_PER_TOWER * NUM_APARTMENTS_PER_FLOOR);
}

int main() {
    // Creando el arreglo de 7 matrices
    vector<vector<vector<int>>> Habitantes(NUM_TOWERS, vector<vector<int>>(NUM_FLOORS_PER_TOWER, vector<int>(NUM_APARTMENTS_PER_FLOOR)));

    // Inicializando inhabitantes con valores aleatorios
    initializeHabitantes(Habitantes);

    // calculando total de hbitantes
    int totalHabitantes = calculateTotalHabitantes(Habitantes);

    // calculando media de habiantes por piso
    for (int tower = 0; tower < NUM_TOWERS; tower++) {
        double floorAverage = calcularMediaPorPiso(Habitantes[tower]);
        cout << "Promedio de habitantes por piso en la torre " << tower + 1 << ": " << floorAverage << endl;
    }

    // calculando media de habitante spor torre
    for (int tower = 0; tower < NUM_TOWERS; tower++) {
        double towerAverage = calcularMediaPorTorre(Habitantes, tower);
        cout << "Promedio de habitantes por torre: " << towerAverage << endl;
    }

    // mostrando total de habitantes
    cout << "Cantidad total de habitantes del complejo: " << totalHabitantes << endl;

    return 0;
}
