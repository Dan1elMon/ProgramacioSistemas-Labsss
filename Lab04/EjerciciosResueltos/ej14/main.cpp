#include <iostream>

using namespace std;

int main() {
    // Declaramos el arreglo y inicializamos
    int arr[] = {10, 20, 30, 40, 50, 60};

    // declaramos un puntero y lo direciconamos al primer lemeneto del arreglo
    int* ptr = arr; 

    // imprimimos el segundo elemento del arreglo sin usar el puntero
    cout << "arr[2] = " << arr[2] << "\n"; // Output: arr[2] = 30

    //imprimimos el tercer elmento utilizando el puntero aritmetico
    cout << "*(arr + 2) = " << *(arr + 2) << "\n"; // Output: *(arr + 2) = 30

    // imrpimimos el valor del segundo elmento utilizando el untero aritmetico
    cout << "ptr[2] = " << ptr[2] << "\n"; // Output: ptr[2] = 30

    // imprimimos el valor del elemento en la segunda posicion utilizando eel puhntero aritmetico
    cout << "*(ptr + 2) = " << *(ptr + 2) << "\n"; // Output: *(ptr + 2) = 30

    return 0;
}
