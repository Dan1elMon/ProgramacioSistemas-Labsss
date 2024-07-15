//código04
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void func(bool& empezar) {
    while (!empezar) {
    this_thread::sleep_for(chrono::milliseconds(1)); // Busy waiting
    }
    cout << "B" << endl;
}

int main() {
    bool empezar = false;
    thread th(func, ref(empezar));
    cout << "A" << endl;
    empezar = true;
    if (th.joinable()) {
        th.join();
    }
    return 0;
}
