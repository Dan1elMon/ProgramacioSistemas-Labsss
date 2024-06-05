#include "funciones.h" // Incluir el archivo de cabecera
#include <cstdlib> // Para utilizar la función rand()
#include <ctime> // Para inicializar el generador aleatorio
#include <iostream>

int randPersonalizado(int min, int max) {
  // Inicializar el generador de números aleatorios
    std::srand(time(NULL));

  // Validar el rango de entrada
    if (min > max) {
        std::cout << "Error: El valor mínimo debe ser menor o igual al valor máximo." << std::endl;
        return -1; // Indicar error
    }

  // Generar un número aleatorio dentro del rango especificado
    if (min == max) {
    return min; // Si el rango es 0, devolver el valor mínimo
        } else {
    return rand() % (max - min + 1) + min;
    }
}
