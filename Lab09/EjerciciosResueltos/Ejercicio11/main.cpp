//codigo11.cpp
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

int counter = 0;
std::mutex mtx;

void increment() {
    for(int i = 0; i < 1000; ++i) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Sección crítica para realizar la operación de incremento de manera segura
    for(int i = 0; i < 10000; ++i) {
        counter = 0; // Reiniciar el contador no tiene sentido aquí

        std::thread t1(increment);
        std::thread t2(increment);

        t1.join();
        t2.join();

        // Comprobar el resultado después de completar las operaciones
        if(counter != 2000) {
            std::cout << i << ": " << counter << std::endl;
        }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    std::cout << "Tiempo= " <<
        std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count()
        << " ms" << std::endl;

    return 0;
}
