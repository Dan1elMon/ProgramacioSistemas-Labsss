#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
    //crear un arreglo de estructuras de tamaño 10
    struct Point arr[10];
    //accediendo a los atributos del arreglo
    arr[0].x = 10;
    arr[0].y = 20;
    //imprimiendo los atrivutos del arreglo
    cout << arr[0].x << " " << arr[0].y << endl;
    return 0;
}
