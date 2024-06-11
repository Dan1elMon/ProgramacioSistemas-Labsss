#include <iostream>
using namespace std;

//declarando estrucutura record con un valor predeterminado

struct Record {
    int x = 7;
};


int main()
{

    //creando una estrucutura recird para imprimir su valor predeterminadow
    Record s;
    cout << s.x << endl;
    return 0;
}