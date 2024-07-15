//codigo09.cpp
#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>
#include <stdint.h> // Para uintptr_t

using namespace std;

#define NUM_THREADS 5

void* wait(void* t) {
    uintptr_t tid = (uintptr_t)t; // Usando uintptr_t para evitar pérdida de precisión
    sleep(1);
    cout << "El hilo está durmiendo" << endl;
    cout << "Hilo con id: " << tid << " ...saliendo" << endl;
    pthread_exit((void*) tid);
    return nullptr;
}

int main() {
    int rc;
    pthread_t threads[NUM_THREADS];
    void* status;

    for(int i = 0; i < NUM_THREADS; i++) {
        cout << "main() : creando el hilo, " << i << endl;
        rc = pthread_create(&threads[i], NULL, wait, (void*)(uintptr_t)i); // Casting a uintptr_t
        if (rc) {
            cout << "Error: no es posible crear el hilo, " << rc << endl;
            exit(-1);
        }
    }

    for(int i = 0; i < NUM_THREADS; i++) {
        rc = pthread_join(threads[i], &status);
        if (rc) {
            cout << "Error: no es posible hacer join, " << rc << endl;
            exit(-1);
        }
        cout << "Main: hilo completado con id: " << i;
        cout << " saliendo con el estado: " << (uintptr_t)status << endl; // Casting a uintptr_t
    }

    cout << "Main: programa terminado." << endl;
    pthread_exit(NULL);
}
