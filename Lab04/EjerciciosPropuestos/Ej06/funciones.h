//funciones.h


#ifndef FUNCIONES_H
#define FUNCIONES_H

int** asignamosMatriz(int filas, int columnas);
void librerarMemoriaMatriz(int** matrix, int filas);
void imprimirMatrix(int** matrix, int filas, int columnas);
void inicializamosMatriz(int** matrix, int filas, int columnas);
int** transponerMatriz(int** matrix, int filas, int columnas);
bool esSimetrica(int** matrix, int filas, int columnas);
bool esAntiSimetrica(int** matrix, int filas, int columnas);
bool esTriangularSuperior(int** matrix, int filas, int columnas);
bool esTriangularInferior(int** matrix, int filas, int columnas);

#endif
