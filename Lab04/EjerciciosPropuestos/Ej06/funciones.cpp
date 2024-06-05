//funciones.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;
//asignamos memoria a  la matrix
int** asignamosMatriz(int filas, int columnas) {
    int** matrix = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matrix[i] = new int[columnas];
    }
    return matrix;
}

//liberamos memoria de la matrix
void librerarMemoriaMatriz(int** matrix, int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

//imrpimirmos amtrix
void imprimirMatrix(int** matrix, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

//inicializamos matrixzxzxzx
void inicializamosMatriz(int** matrix, int filas, int columnas) {
    srand(time(NULL));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

//transponemos matrix
int** transponerMatriz(int** matrix, int filas, int columnas) {
    int** transpuesta = asignamosMatriz(columnas, filas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matrix[i][j];
        }
    }
    return transpuesta;
}

//Verificamos si es simetrica la matrix
bool esSimetrica(int** matrix, int filas, int columnas) {
    if (filas != columnas) return false;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matrix[i][j] != matrix[j][i]) return false;
        }
    }
    return true;
}

//verificamos si la matrix es antisimetrica
bool esAntiSimetrica(int** matrix, int filas, int columnas) {
    if (filas != columnas) return false;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matrix[i][j] != -matrix[j][i]) return false;
        }
    }
    return true;
}

//verificamos si es triangular superior
bool esTriangularSuperior(int** matrix, int filas, int columnas) {
    if (filas != columnas) return false;
    for (int i = 1; i < filas; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) return false;
        }
    }
    return true;
}

//verificamos si es trianigular inferior
bool esTriangularInferior(int** matrix, int filas, int columnas) {
    if (filas != columnas) return false;
    for (int i = 0; i < filas - 1; i++) {
        for (int j = i + 1; j < columnas; j++) {
            if (matrix[i][j] != 0) return false;
        }
    }
    return true;
}
