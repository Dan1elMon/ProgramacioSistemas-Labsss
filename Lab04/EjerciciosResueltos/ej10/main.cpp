#include <bits/stdc++.h>
using namespace std;

void alumnos() {
    // Declarar un arreglo v de tamaño e inicializamos con 3 valores
    int v[3] = {10, 100, 200};

    // Declarar un puntero 'ptr'
    int *ptr; 

    // Asignar la dirección del primer elemento de 'v' (v[0]) a 'ptr'
    ptr = v; 

    // Bucle for para recorrer el arreglo y mostrar información sobre el puntero
    for (int i = 0; i < 3; i++) {
        // Imprimir el valor de la dirección almacenada en ptr
        cout << "Valor para ptr = " << ptr << "\n";

        // Imprimir el valor al que apunta 'ptr' (el elemento del arreglo en la posición actual)
        cout << "Valor para *ptr = " << *ptr << "\n";

        // Incrementar el puntero en 1 para apuntar al siguiente elemento del arreglo
        ptr++;
    }
    }

    int main() {
    alumnos();

    return 0;
}
