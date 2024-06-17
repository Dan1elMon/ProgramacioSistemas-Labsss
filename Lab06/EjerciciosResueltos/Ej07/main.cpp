#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    //declarando variables tipo string
    string nombre;
    string linea;
    //pidiendo nmbre del fichero por teclado
    cout << "Dime el nombre del fichero: ";
    getline(cin, nombre);
    //abiendo fichero
    ifstream fichero(nombre.c_str());
    //verificando si existe el fichero
    if( fichero.fail() )
    {
        cout << "No existe el fichero!" << endl;
        exit(1);
    }
    while (! fichero.eof())
    {
        //imprimiendo linea del ichero si existe
        getline(fichero,linea);
       // if (!fichero.eof())
        cout << linea << endl;
    }
    //cerrando ficjero
    fichero.close();
    return 0;
}
