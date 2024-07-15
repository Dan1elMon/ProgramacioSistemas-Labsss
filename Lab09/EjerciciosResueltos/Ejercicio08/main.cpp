//codigo08.cpp
#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

struct thread_data {
    int thread_id;
    const char *message;
};

void* PrintHello(void* threadarg) {
    struct thread_data *my_data;
    my_data = (struct thread_data *) threadarg;
    cout << "Thread ID : " << my_data->thread_id;
    cout << " Mensaje : " << my_data->message << endl;
    pthread_exit(NULL);
    return nullptr; // Añadir esta línea para suprimir la advertencia
}

int main() {
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;

    for(int i = 0; i < NUM_THREADS; i++) {
        cout << "main() : creando un hilo, " << i << endl;
        td[i].thread_id = i;
        td[i].message = "Este es el mensaje";
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&td[i]);
        if (rc) {
            cout << "Error: no es posible crear el hilo, " << rc << endl;
            exit(-1);
        }
    }

    // Esperar a que todos los hilos terminen
    for(int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
