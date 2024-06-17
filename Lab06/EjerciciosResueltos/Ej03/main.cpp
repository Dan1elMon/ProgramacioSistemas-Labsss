#include <iostream>
#include <fstream>
using namespace std;
    int main () {
    //creando fichero
    fstream ficheroEntrada;
    //declarando variables string nomrbe y frase
    string nombre;
    string frase;
    //obteniendo el nombre del fichero
    cout << "Dime el nombre del fichero: ";
    getline(cin,nombre);
    //abriendo fichero
    ficheroEntrada.open ( nombre.c_str() , ios::in);
        //verificando si esta abierto
        if (ficheroEntrada.is_open()) {
            //obteniendo frase del fichero abierto
            while (! ficheroEntrada.eof() ) {
                getline (ficheroEntrada,frase);
                cout << "Leido: " << frase << endl;
            }
        //cerrando fichero
        ficheroEntrada.close();
    }
    //en caso de no poder imprimir el fichero mencionado se imprime un mensaje de error
    else cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    return 0;
}
