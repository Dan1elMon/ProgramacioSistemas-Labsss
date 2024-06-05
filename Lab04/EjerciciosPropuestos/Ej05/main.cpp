#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// asignamos memoria a la matriz
    int** asignamosMatriz(int filas, int columnas) {
    int** matrix = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matrix[i] = new int[columnas];
    }
    return matrix;
}

// funcion para liberar memoria de la matriz
void librerarMemoriaMatriz(int** matrix, int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Funcion para imprimir la matrix
void imprimirMatrix(int** matrix, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
        cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// funcion para inicializar la matrix con valores aleatorios
void inicializamosMatriz(int** matrix, int filas, int columnas) {
    srand(time(NULL)); //semilla de numeros aleatorios

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
        matrix[i][j] = rand() % 10; // numeros aleatorios de 0 a 9
        }
    }
}

//funcion para multiplicar la matrixxzxzx
int** matrixMultiplication(int** mat1, int filas1, int columnas1, int** mat2, int filas2, int columnas2) {
    // revisamos matrices validas para la multipliacion
    if (columnas1 != filas2) {
        cout << "Error: Matrices invalidas para la multiplicacion." << endl;
        return nullptr;
    }

    // asignamos memoria para la matrix resultante
    int** result = asignamosMatriz(filas1, columnas2);

    // multipicamos amtrices
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
        result[i][j] = 0;
        for (int k = 0; k < columnas1; k++) {
            result[i][j] += mat1[i][k] * mat2[k][j];
        }
        }
    }

    return result;
}

int main() {
    // inicializamos dimensiones de la smatrices
    int filas1, columnas1, filas2, columnas2;

    filas1 = 3;
    columnas1 = 2;
    filas2 = 2;
    columnas2 = 3;

    // asignamos memoria para las matrices de ejemplo
    int** mat1 = asignamosMatriz(filas1, columnas1);
    int** mat2 = asignamosMatriz(filas2, columnas2);

    // inicializamos matrices con valores aleatorios
    inicializamosMatriz(mat1, filas1, columnas1);
    inicializamosMatriz(mat2, filas2, columnas2);

    // imprimimos las amtrices
    cout << "Primera matrix:" << endl;
    imprimirMatrix(mat1, filas1, columnas1);

    cout << "Segunda Matrix:" << endl;
    imprimirMatrix(mat2, filas2, columnas2);

    //mulltiplicamos matrices
    int** result = matrixMultiplication(mat1, filas1, columnas1, mat2, filas2, columnas2);

    //imprmiimos la mtriz resultante
    cout << "Matriz Resultante :" << endl;
    imprimirMatrix(result, filas1, columnas2);

    // liberamos memoria de las matrices
    librerarMemoriaMatriz(mat1, filas1);
    librerarMemoriaMatriz(mat2, filas2);
    librerarMemoriaMatriz(result, filas1);

    return 0;
}
