//codigo07.cpp
#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

void* PrintHello(void* threadid) {
    int tid = *((int*)threadid); // Desreferenciar el puntero entero
    cout << "Hola mundo! parametro ID, " << tid << endl;
    pthread_exit(NULL);
    return nullptr; // Añadir esta línea para suprimir la advertencia
}

int main() {
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS];
    int rc;

    for (int i = 0; i < NUM_THREADS; i++) {
        cout << "main() : creando thread, " << i << endl;
        indexes[i] = i;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void*)&indexes[i]);
        if (rc) {
            cout << "Error: unable to create thread, " << rc << endl;
            exit(-1);
        }
    }

    // Esperar a que todos los hilos terminen
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
