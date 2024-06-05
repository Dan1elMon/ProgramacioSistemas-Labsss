#include "funciones.h"
#include <iostream>

using namespace std;

int main() {
  // Definir los rangos máximos para cada caso
  int rangoMax1 = 1;
  int rangoMax2 = 9;
  int rangoMax3 = 1499;
  int rangoMax4 = 65535;

  int numeroAleatorio=0;
  // Solicitar al usuario el límite superior para cada rango
  cout << "Ingrese el límite superior para el rango 0 a " << rangoMax1 << ": ";
  cin >> rangoMax1;
  cout << "Ingrese el límite superior para el rango 0 a " << rangoMax2 << ": ";
  cin >> rangoMax2;
  cout << "Ingrese el límite superior para el rango 0 a " << rangoMax3 << ": ";
  cin >> rangoMax3;
  cout << "Ingrese el límite superior para el rango 0 a " << rangoMax4 << ": ";
  cin >> rangoMax4;

  // Generar y mostrar números aleatorios para cada rango
  cout << "\nNúmeros aleatorios para rango 0 a " << rangoMax1 << ":\n";
  numeroAleatorio = randPersonalizado(0, rangoMax1);
    cout << numeroAleatorio << " ";
  

  cout << "\n\nNúmeros aleatorios para rango 0 a " << rangoMax2 << ":\n";
  numeroAleatorio = randPersonalizado(0, rangoMax2);
    cout << numeroAleatorio << " ";
  

  cout << "\n\nNúmeros aleatorios para rango 0 a " << rangoMax3 << ":\n";
  numeroAleatorio = randPersonalizado(0, rangoMax3);
    cout << numeroAleatorio << " ";
  

  cout << "\n\nNúmeros aleatorios para rango 0 a " << rangoMax4 << ":\n";
  numeroAleatorio = randPersonalizado(0, rangoMax4);
    cout << numeroAleatorio << " ";
  

  return 0;
}
