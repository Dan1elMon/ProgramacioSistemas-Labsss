#include <bits/stdc++.h>
using namespace std;
void alumnos(){
    int var = 20;
    int *ptr; //declaramos una variable puntero
    ptr = &var;
    //el tipo de dato var y ptr son lo mismo
    //asignamos la direccion de una a un puntero
    cout << "Valor para ptr = " << ptr << "\n";
    cout << "Valor para var = " << var << "\n";
    cout << "Valor para *ptr = " << *ptr << "\n";
}
//funcion principal
int main()
{
    alumnos();
}