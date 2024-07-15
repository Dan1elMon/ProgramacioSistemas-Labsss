#include <iostream>
#include <thread>
using namespace std;

void func() {
  // Empty function body
}

int main() {
  thread th(func);
  th.join(); // Implicitly added to ensure the thread completes
  return 0;
}
