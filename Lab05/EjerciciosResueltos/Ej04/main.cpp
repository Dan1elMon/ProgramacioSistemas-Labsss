#include <iostream>
using namespace std;
//declarando estructura del punto
struct Point {
    int x, y;
};
int main()
{
    struct Point p1 = { 0, 1 };
    //Accediendo a los atributos del punto 1
    p1.x = 20;
    cout << "x = " << p1.x << ", y = " << p1.y << endl;
    return 0;
}