#include <iostream>
using namespace std;

struct Point {
    int x = 0; // Esto es considerado argumentos por defecto
    int y = 1; // sin error
};
int main()
{
    struct Point p1;
    //accediendo a los atribucos del punto p1
    //Como no hay valor para inicializar se mantiene los valores iniciales
    cout << "x = " << p1.x << ", y = " << p1.y <<endl;
    //Inicializando el valor de y = 20
    p1.y = 20;
    //imprimiendo el valor del punto
    cout << "x = " << p1.x << ", y = " << p1.y <<endl;
    return 0;
}