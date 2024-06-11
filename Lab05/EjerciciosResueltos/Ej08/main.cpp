#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct datosPersona //creando estructura datosPersona
    {
        //declarando variables de la estructura
        string nombre;
        char inicial;
        int edad;
        float nota;
    };
    //asignando valores a la estructura
    datosPersona persona;
    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    //imprimiendo edad de la persona
    cout << "La edad es " << persona.edad << endl;
    return 0;
}