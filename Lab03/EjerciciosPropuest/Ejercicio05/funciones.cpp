// funciones.cpp

#include <iostream>
#include <vector>
#include "funciones.h"

using namespace std;

// Función para determinar números pares e impares
void determinarParesImpares() {
    int numeros[10];
    cout << "Ingrese 10 números enteros:" << endl;
    for (int i = 0 ; i < 10; i++) {
        cin >> numeros[i];
    }

    cout << "Números pares: ";
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            cout << numeros[i] << " ";
        }
    }
    cout << endl;

    cout << "Números impares: ";
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            cout << numeros[i] << " ";
        }
    }
    cout << endl;
}

// Función para determinar si un número es perfecto
bool esNumeroPerfecto(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma == num;
}

// Función para encontrar los primeros 100 números perfectos
void numerosPerfectos() {
    cout << "Los primeros 100 números perfectos son: ";
    int count = 0;
    int num = 1;
    while (count < 100) {
        if (esNumeroPerfecto(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

// Función para invertir los dígitos de un número de cuatro dígitos
void invertirDigitos() {
    int num;
    cout << "Ingrese un número de cuatro dígitos: ";
    cin >> num;

    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    cout << "El número con los dígitos invertidos es: " << invertido << endl;
}
