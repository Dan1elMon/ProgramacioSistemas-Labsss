// funciones.cpp

#include <cmath>
#include "funciones.h"

double sumar(double num1, double num2) {
    return num1 + num2;
}

double restar(double num1, double num2) {
    return num1 - num2;
}

double multiplicar(double num1, double num2) {
    return num1 * num2; 
}

double dividir(double num1, double num2) {
    return num1 / num2;
}

double exponencialCuadrado(double num) {
    return num * num;
}

double divisionEspecial(double num) {
    return 1.0 / num;
}

double raizCuadrada(double num) {
    return sqrt(num);
}

double porcentaje(double num1, double num2) {
    return (num1 * num2) / 100.0;
}
