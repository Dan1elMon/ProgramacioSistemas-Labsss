#include <iostream>
#include <fstream>
using namespace std;

int main()
    {
        //declarando fichero
    ofstream fichero("prueba.txt");
    //imprimiendo textos en el fichero en el fichero
    fichero << "Esto es una línea" << endl;
    fichero << "Esto es otra";
    fichero << " y esto es continuación de la anterior" << endl;
    //cerrando fichero
    fichero.close();
    return 0;
}