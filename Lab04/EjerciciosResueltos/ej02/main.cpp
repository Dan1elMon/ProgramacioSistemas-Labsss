#include <bits/stdc++.h>
using namespace std;
//pasando por valor
int cuadrado1(int n)
{
    //Dirección de n en cuadrado1 no es la misma en n1 en main()
    cout << "address de n1 en cuadrado1(): "<< &n << "\n";
    //clon modificado dentro de la función multiplicando
    n *= n;
    return n;
}
void alumnos()
{
    //llamda por valor
    int n1=8;
    cout << "dirección de n1 en main(): " << &n1 << "\n";
    cout << "Cuadrado de n1: " << cuadrado1(n1) << "\n";
    cout << "Sin cambio en n1: " << n1 << "\n";
}
int main()
{
    alumnos();
}
