#include <iostream>
#include <fstream>
using namespace std;

// Clase derivada de "exception" para manejar excepciones de copia de ficheros.
class CopiaEx : public exception {
public:
    CopiaEx(int mot) : exception(), motivo(mot) {}
    const char* what() const throw();
private:
    int motivo; // Código de motivo del error
};  

// Implementación del método "what()" que devuelve una descripción del error
const char* CopiaEx::what() const throw() {
    switch (motivo) {
        case 1:
            return "Fichero de origen no existe"; // Error si el archivo de origen no existe
        case 2:
            return "No es posible abrir el fichero de salida"; // Error si no se puede abrir el archivo de destino
        default:
            return "Error inesperado"; // Error genérico
    }
}

// Función para copiar el contenido de un archivo a otro
void CopiaFichero(const char* Origen, const char* Destino);

int main() {
    char Desde[] = "excepcion.txt"; // Nombre del archivo de origen
    char Hacia[] = "excepcion2.txt"; // Nombre del archivo de destino

    try {
        CopiaFichero(Desde, Hacia); // Intenta copiar el archivo
    }
    catch (CopiaEx &ex) {
        cout << ex.what() << endl; // Captura y muestra el mensaje de error si ocurre una excepción
    }

    return 0;
}

// Implementación de la función para copiar archivos
void CopiaFichero(const char* Origen, const char* Destino) {
    unsigned char buffer[1024]; // Buffer para leer y escribir datos
    int leido; // Cantidad de bytes leídos

    ifstream fe(Origen, ios::in | ios::binary); // Abre el archivo de origen en modo binario
    if (!fe.good()) throw CopiaEx(1); // Lanza una excepción si el archivo de origen no se puede abrir

    ofstream fs(Destino, ios::out | ios::binary); // Abre el archivo de destino en modo binario
    if (!fs.good()) throw CopiaEx(2); // Lanza una excepción si el archivo de destino no se puede abrir

    do {
        fe.read(reinterpret_cast<char*>(buffer), 1024); // Lee hasta 1024 bytes del archivo de origen
        leido = fe.gcount(); // Obtiene el número de bytes leídos
        fs.write(reinterpret_cast<char*>(buffer), leido); // Escribe los bytes leídos en el archivo de destino
    } while (leido > 0); // Repite hasta que no haya más bytes que leer

    fe.close(); // Cierra el archivo de origen
    fs.close(); // Cierra el archivo de destino
}
