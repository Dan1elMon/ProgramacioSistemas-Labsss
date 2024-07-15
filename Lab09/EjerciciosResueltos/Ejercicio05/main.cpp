//codigo05.cpp
#include <iostream>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 1

void* say_hello(void* args) {
    cout << "Hola mundo!" << endl;
    return NULL; // el thread uede retornar un valor
}

int main() {
    pthread_t tids[NUM_THREADS]; // un arreglo para almacenar ids

    for (int i = 0; i < NUM_THREADS; ++i) {
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0) {
        cout << "Error en thread: codigo_error=" << ret << endl;
        }
    }

    pthread_exit(NULL); // Main thread exits
}

