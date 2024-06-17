#include <iostream>
#include <fstream>
using namespace std;


int main () {
    //creando fichero 
    ofstream ficheroSalida;
    //abriendo archivo de texto
    ficheroSalida.open ("ficheroTexto.txt");
    //imprimiendo texto en el archivo
    ficheroSalida << "Texto creado por el ficherorororo de dainek";
    //cerrando archivo
    ficheroSalida.close();
    
    return 0;
}