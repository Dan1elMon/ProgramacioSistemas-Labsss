#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable 'a' and initialize it with the value 5
    int a = 5;

    // DECLARAMO otra referencia y la apntamos a a
    int &S = a; // S apunta a la misma direccion de a

    // declaramos otra referencia y la direccionamos a S
    int &S0 = S; // 'S0 apunta a la misma direccionde  a

    // declaramos otra referencia S1 y la iniciamizamos con la misma ubicacion de memoria
    int &S1 = S0; // S1 apunta a la misma direccion de a

    // imprimimos el valor a S so Y S1
    cout << "a = " << a << "\t" << "S = " << S << "\t" << "S0 = " << S0 << "\t" << "S1 = " << S1
        << "\n"; // Output: a = 5	S = 5	S0 = 5	S1 = 5

    // todos los valores son diferntes
    // todos refieren a la misma variable.

    return 0;
}
