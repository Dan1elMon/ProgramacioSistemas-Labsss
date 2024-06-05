#include <iostream>
using namespace std;
int main()
{
    //Inicializamos con el operador new()
    int *n = new int(10);//asignamos memoria e inicializamos con 10
    cout << *n;//imprimimos el valor almacenado en la memoria

    return 0;
}