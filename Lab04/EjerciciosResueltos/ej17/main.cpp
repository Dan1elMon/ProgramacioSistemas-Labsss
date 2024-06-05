#include <bits/stdc++.h>
using namespace std;

void fun(int n, int* cuadrado, double* raiz_cuadrada)
{
    *cuadrado = n * n;
    *raiz_cuadrada = sqrt(n);
}
int main()
{
    int n = 100;//declaramos n y lo inicializamos con el valor 100
    int* sq = new int;//asignamos memoria para enteros utilizando asignacion dinamica
    double* sq_root = new double;//llamamos la funcion y enviamos argumentos
    fun(n, sq, sq_root);//Imprime el cuadrado y la raíz cuadrada de la memoria asignada.
    cout << *sq << " " << *sq_root;// Desasignar memoria para evitar pérdidas de memoria (¡importante!)
    return 0;
}