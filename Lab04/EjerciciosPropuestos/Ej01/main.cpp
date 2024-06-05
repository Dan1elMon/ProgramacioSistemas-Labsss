#include <iostream>

using namespace std;

void displayPascalTriangle(int n) {
    // Creando un arreglo utilizando long long   como tipo de dato
    int arr[n * (n + 1) / 2];

    // inicializando la variable indice
    int idx = 0;

    // inicializando la primera fila
    arr[idx++] = 1;

    // iterando desde la fila 1 a la fila n-1
    for (int row = 1; row < n; row++) {
        // inicializando el primer elemento en la fila actual
        arr[idx++] = 1;

        // calcular los lementos actuales en la fila actual
        for (int col = 1; col < row; col++) {
          arr[idx++] = arr[idx - row] + arr[idx - row - 1];
        }

        // inicializando el ultimo elemento en la fila actual
        arr[idx++] = 1;
    }

    // imrpimiendo el triangulo de pasacl
    idx = 0;
    for (int row = 0; row < n; row++) {
      // imprimiendo espacios para dar forma de triangulo
      for (int j = 0; j < n - row - 1; j++) {
        cout << " ";
      }

      // imprimiendo elementos en la fila actual
      for (int col = 0; col <= row; col++) {
        cout << arr[idx++] << " ";
      }

      cout << endl;
    }
}

int main() {
    int n; // numero de filas en el triangulo

    cout << "Ingrese el número de filas: ";
    cin >> n;

    if (n <= 0) {
      cout << "El número de filas debe ser positivo." << endl;
      return 1;
    }

    displayPascalTriangle(n);

    return 0;
}