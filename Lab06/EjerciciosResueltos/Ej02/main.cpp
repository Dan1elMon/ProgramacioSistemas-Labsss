#include <iostream>
#include <fstream>
using namespace std;

int main () {
    //creando fichero
    ifstream ficheroEntrada;
    //declarando variable tipo string
    string frase;
    //abriendo fichero
    ficheroEntrada.open ("ficheroTexto.txt");
    //obteniendo frase del fichero
    getline(ficheroEntrada, frase);
    //cerrando fichero
    ficheroEntrada.close();
    //imprimiendo frase obtenida
    cout << "Frase leida: " << frase << endl;
    return 0;
}