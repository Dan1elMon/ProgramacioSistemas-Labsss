#include <bits/stdc++.h>
using namespace std;

main() {

    // Creamos una variable utilizando el operador new y tambiÃ©n utilizamos el operador delete para borrar dicha variable

    int *a; // Declare a pointer variable 'a' of type 'int*'. This means 'a' can store memory addresses that point to integer values.

    a = new(int); // asignamos memoria dinamica para un entero

    cout << "Ingrese un valor entero ";

    cin >> *a; // Leemos el valor ingreswado por el usiario

    cout << endl << "El valor ingresado es: " << *a; // imprimimos el valor almacenado en el puntero *a

    return 0;
}
