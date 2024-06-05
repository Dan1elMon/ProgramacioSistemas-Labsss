#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int valor1, valor2, valor3;
    for (int i=1; i<=3; i++) {
        cout << "Corrida: " << i << endl;
        valor1 = rand();
        cout << "Sin semilla: " << valor1 << endl;
        srand(40);
        valor2=rand();
        cout << "valor2: " << valor2 << endl;
        valor3=rand() %100 +1;
        cout << "valor3: " << valor3 << endl;
        srand(1);
    } return 0;
}