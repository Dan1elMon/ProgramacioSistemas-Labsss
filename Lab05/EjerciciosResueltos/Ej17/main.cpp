#include <iostream>
using namespace std;


//declarando estructura vacia

struct Record{

};
//Programa principal
int main() {
    struct Record s;
    //llamando a la funcion sizeof para verificar si la estructura esta vacia
    cout << sizeof(s) << endl;
    return 0;
}