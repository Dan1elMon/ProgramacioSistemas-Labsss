#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int valor = 0;
    cout << "rand() definiendo limite inferior e inferior" << endl;
    valor = 1 + rand()%100;
    cout << "1 + rand()%100\t\t" << valor << endl;
    valor = 25 + rand()%100;
    cout << "25 + rand()%100\t\t"<< valor << endl;
    valor = 0 + rand() %51;
    cout << "0 + rand() %51: \t\t" << valor << endl << endl;
    return 0;
}