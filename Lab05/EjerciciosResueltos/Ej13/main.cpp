#include <iostream>
using namespace std;

//declarando estructura marks
struct marks {
    int num;
    
    //Funcionn miembro dentro de la estructura para tomar la entrada y alojarla en"num"
    void Set(int temp)
    {
        num = temp;
    }
    void display()//funcion usada para mostrar los valores
    {
        cout << "num = " << num << endl;
    }
};

int main()
{
    marks m1;
    m1.Set(9); //llamando a la funcion dentro de la estructura para inicializar el valor de "num"
    m1.display(); //llamando a la funcionn dentro de la estructura para mostrar el valor de "num"
}