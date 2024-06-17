#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //pidiendo el nombre del fichero por teclado
    cout << "Dime el nombre del fichero: ";
    string nombre;
    //pidiendo linea del fichero
    getline(cin, nombre);
    //verificando si el fichero esta
    ifstream fichero(nombre.c_str());
    //declarando variable linea
    string linea;
    //pidiendo linea del fichero y almacenandolo en linea
    getline(fichero,linea);
    //imprimiendo mensaje de confirmacon
    cout << "Se ha leido: " << endl;
    //imprimiendo linea
    cout << linea << endl;
    //cerrando fichero
    fichero.close();
    return 0;
}