
#include <bits/stdc++.h>
using namespace std;

int fun(int ptr[]) {
    int x = 10;

    //imprimimoe el tamanio del elemento apuntado por ptr
    cout << "sizeof(ptr) = " << (int)sizeof(*ptr) << endl; // Output: sizeof(ptr) = 4

    // asignamos la rieccion de la variable alojada en la direccion del puntero
    ptr = &x; //  (valor= 10)

    // imprimimos el valor de la direccion de memoria direccionada por el punter ptr
    cout << "*ptr = " << *ptr << endl; // Output: *ptr = 10

    return 0;
}
int main() {
    int arr[] = {20, 20, 30, 40, 50, 60};

    //imprimimos el tamaño del arregio
    cout << "sizeof(arr) = " << (int)sizeof(arr) << endl; // Output: sizeof(arr) = 24

    fun(arr);

    return 0;
}
