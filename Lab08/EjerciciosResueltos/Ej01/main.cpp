#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {
#ifdef _WIN32
    std::cout << "fork() is not available on Windows." << std::endl;
#else
    fork();
#endif

    return 0;
}
