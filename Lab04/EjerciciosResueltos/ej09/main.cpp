#include <bits/stdc++.h>
using namespace std;

void alumnos() {
    // declaramos un arreglo con 3 elementos
    int val[3] = {5, 10, 20};

    // Declaramos un puntero
    int *ptr;

    // Asignamos el puntero al primer elemento
    ptr = val;

    // imprimimos los elementos usando el puntero
    cout << "Elementos del arreglo son: "; 
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2]; // Output: 5 10 20
    }

    int main() {
    alumnos();

    return 0;
}
