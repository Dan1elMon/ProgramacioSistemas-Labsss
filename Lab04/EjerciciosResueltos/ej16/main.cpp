#include <bits/stdc++.h>
using namespace std;
void incrementar(void *data, int ptrsize)
{
    if(ptrsize == sizeof(char))
    {
    char *ptrchar;//declaramos el puntero ptrchar

    //Casteamos el dato para un puntero char
    ptrchar = (char*)data;

    //Incrementamos el valor char guardado a *ptrchar en 1
    cout << "*puntos datos para un char" << "\n";
    }
        else if(ptrsize == sizeof(int))
    {
        int *ptrint;
        //Casteamos datos para un puntero int
        ptrint = (int*)data;
        //Incrementamos el entero alojado a *ptrchar en 1
        (*ptrint)++;
        cout << "*puntos datos para un int" << "\n";
    }
}
void alumno()
{
    //declaramos un caracter
    char c='x';
    //declaramos un entero
    int i=10;
    //llamamos a una funcionn para incrementar usando un direccionn char o intr espectivamente

    incrementar(&c,sizeof(c));
    cout << "El nuevo valor de c es: " << c << "\n";
    incrementar(&i,sizeof(i));
    cout << "El nuevo valor de i es: " << i << "\n";
}
int main()
{
    alumno();
}