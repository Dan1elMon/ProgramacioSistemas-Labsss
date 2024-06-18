#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //declarando variables
    string nombre;
    char datos[256];
    int compresion;
    
    cout << "Comprobador de imágenes BMP" << endl;
    //pidiendo el nombre dle fichero por texto
    cout << "Dime el nombre del fichero: ";
    getline(cin, nombre);
    ifstream fichero(nombre.c_str(), ifstream::binary);
    //verificando si se encoontro el fichero
    if ( fichero.fail() ){
        cout << "No encontrado" << endl;
    }else{

        fichero.seekg(30, fichero.beg);
        fichero.read(datos,1);
        fichero.close();
        compresion = datos[0];
        if (compresion == 0)
            cout << "Sin compresión";
        else
            cout << "BMP Comprimido";
    }
    return 0;
}
