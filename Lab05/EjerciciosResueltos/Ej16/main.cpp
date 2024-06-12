#include <iostream>
using namespace std;

//declarando estructura estudiante
struct Student {
    int roll;
    Student(int x)
    {
        roll = x;
    }
};
//programa principal de pruebas
int main()
{
    //declaramos estructura estudiante y lo inicializamos con un valor entero 2
    struct Student s(2);
    //llamamos la funcion roll de la estructura
    cout << s.roll << endl;
    return 0;
}
