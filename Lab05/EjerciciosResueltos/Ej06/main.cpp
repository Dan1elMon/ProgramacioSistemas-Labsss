#include <iostream>
using namespace std;

//declarando estructura del punto
struct Point {
    int x, y;
};
int main()
{
    struct Point p1 = { 1, 2};

    //p2 es un puntero a la estructura p1
    struct Point* p2 = &p1;
    //accediendo a los atributos usando la estructura puntero
    cout << p2 -> x << " " << p2 -> y << endl;
    return 0;
}