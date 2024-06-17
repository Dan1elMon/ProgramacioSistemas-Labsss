#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string nombre;
    string linea;

    // Pidiendo el nombre del fichero por teclado
    cout << "Dime el nombre del fichero: ";
    getline(cin, nombre);

    // Abriendo fichero
    ifstream fichero(nombre.c_str());

    // Verificando si el fichero se abrió correctamente
    if (fichero.fail()) {
        cout << "No existe el fichero!" << endl;
        exit(1);
    }

    // Leyendo la primera línea del fichero
    getline(fichero, linea);

    // Verificando si el fichero está vacío o tiene contenido
    if (fichero.eof() && linea.empty()) {
        cout << "El fichero está vacío" << endl;
    } else {
        cout << "El fichero tiene contenido" << endl;
    }

    // Cerrando el fichero
    fichero.close();

    return 0;
}
