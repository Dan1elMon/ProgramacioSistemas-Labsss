// funciones.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

// Función para simular el lanzamiento de dos dados
int tirarDados() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}

// Función para jugar una partida de Craps
void jugarCraps() {
    srand(time(0)); // Inicializar la semilla de números aleatorios
    int punto = 0;
    int sumaDados = tirarDados();

    cout << "Jugador tira: " << sumaDados << endl;

    switch (sumaDados) {
        case 7:
        case 11:
            cout << "El jugador gana!" << endl;
            return;
        case 2:
        case 3:
        case 12:
            cout << "Craps! El jugador pierde." << endl;
            return;
        default:
            punto = sumaDados;
            cout << "El punto es: " << punto << endl;
            break;
    }

    // Continuar tirando los dados hasta que el jugador gane o pierda
    do {
        sumaDados = tirarDados();
        cout << "Jugador tira: " << sumaDados << endl;
        if (sumaDados == 7) {
            cout << "El jugador pierde." << endl;
            return;
        }
    } while (sumaDados != punto);

    cout << "El jugador gana!" << endl;
}
