#include <iostream>
using namespace std;
int main() {
    int i = 10; //declaramos entero
    int *p=&i;//declaramos pntero simple
    int **pt=&p; //declaramos doble puntero
    int ***ptr=&pt; //declaramos triple puntero

    cout << "i=" << i << "\t" << "p=" << p << "\t" << "pt= " << pt << "\t" << "ptr= " << ptr <<
    "\n";
}