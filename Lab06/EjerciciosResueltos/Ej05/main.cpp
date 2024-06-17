#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //abriendo fichero llamado prueba.txt
    ifstream fichero("prueba.txt");
    //declarando variable tipo string llamada linea
    string linea;
    //almacenando fichero en la variable linea
    fichero >> linea;
    //imprimiendo texto de confirmación"
    cout << "Se ha leido: " << endl;
    //imprimiendo texto almacenado
    cout << linea << endl;
    //cerrando fichero
    fichero.close();
    return 0;
}