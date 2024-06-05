#include <iostream>
using namespace std;

int* createArr(int n) {
    return new int[n]; // asignamos memoria dinamica a un arreglo de n enteros y retornamos la direccion del primer elemento del arreglo
}

int main() {
    int* pt = createArr(10);
    cout << pt << endl; // imprime el valor de pt donde el arreglo esta alojoado
    cout << *pt << endl; // imprimimos el alor del primer elemento del arreglo, sin embargo la memoria un no esta asignada
    return 0;
    }
