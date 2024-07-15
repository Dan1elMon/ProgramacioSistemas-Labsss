// codigo10.cpp
#include <iostream>
#include <thread>
using namespace std;

// Función normal
void foo(int Z) {
    for (int i = 0; i < Z; i++) {
        cout << "Hilo usando función puntero como objeto invocable\n";
    }
}

// Objeto función
class thread_obj {
public:
    void operator()(int x) {
        for (int i = 0; i < x; i++) {
            cout << "Hilo usando función objeto como invocable\n";
        }
    }
};

int main() {
    cout << "Hilos 1, 2 y 3 operando independientemente" << endl;

    // Hilo th1 iniciado usando función puntero como objeto invocable
    thread th1(foo, 3);

    // Hilo th2 iniciado usando función objeto como invocable
    thread th2(thread_obj(), 3);

    // Expresión lambda
    auto f = [](int x) {
        for (int i = 0; i < x; i++) {
            cout << "Hilo usando lambda expresión como invocable\n";
        }
    };

    // Hilo th3 iniciado usando expresión lambda como invocable
    thread th3(f, 3);

    // Esperar a que terminen los hilos
    th1.join(); // Espera a que termine el hilo th1
    th2.join(); // Espera a que termine el hilo th2
    th3.join(); // Espera a que termine el hilo th3

    return 0;
}
