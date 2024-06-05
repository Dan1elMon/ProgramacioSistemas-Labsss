#include <bits/stdc++.h>
using namespace std;
//recibimos el argumento
void cuadrado3(int &n)
{
    //la direccion en cuadradon3 sera la misma
    cout << "dirección de n3 en cuadrado3(): "<< &n << "\n";
    //Implicito rereferenciado (sin "*")
    n *= n;
}
void alumnos()
{
    //llamada por referencia con argumentos como referencia
    int n3 =8;
    cout << "dirección de n3 en la función principal: " << &n3 << "\n";
    cuadrado3(n3);
    cout << "Cuadrado de n3: " << n3 << "\n";
    cout << "Cambio reflejado en n3: " << n3 << "\n";
}
int main()
{
    alumnos();
}
