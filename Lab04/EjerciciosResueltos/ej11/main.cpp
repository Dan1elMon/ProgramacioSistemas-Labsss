#include <iostream>

using namespace std;

int main() {
    //declara un arreglo de enteros y lo inicializa
    int arr[] = {10, 20, 30, 40, 50, 60};

    //declara un puntero ptr y lo asigna al primer elemento del arreglo
    int* ptr = arr;

    // imprime el tamanio del arreglo usando el operador sizeof
    cout << "Size of arr[] " << sizeof(arr) << "\n"; // Output: Size of arr[] 24

    // imrime el tamanio del pntero usando el operador 
    cout << "Size of ptr " << sizeof(ptr) << "\n"; // Output: Size of ptr 4

    return 0;
}
