//codigo02.cpp
#include <iostream>
#include <thread>
using namespace std;

void func(int n, double m) {
  // Empty function body (doesn't use n and m)
}

int main() {
    thread th(func, 1, 5.7);
}
