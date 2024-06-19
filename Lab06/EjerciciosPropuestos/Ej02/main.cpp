#include <iostream>
#include <fstream>
#include <string>

void escribirFrases(const std::string& nombreArchivo);
void mostrarFrases(const std::string& nombreArchivo);

int main() {
    const std::string nombreArchivo = "frases.txt";
    //llamando metodos necesiarios
    escribirFrases(nombreArchivo);
    mostrarFrases(nombreArchivo);

    return 0;
}

void escribirFrases(const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo);
    //verificando si pudimos abrir el archivoi
    if (!archivo) {
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
        return;
    }

    std::string frase;
    std::cout << "Introduce frases (pulsa Intro sin teclear nada para terminar):" << std::endl;
    //introducir frases hasta enviar enter
    while (true) {
        std::getline(std::cin, frase);
        if (frase.empty()) {
            break;
        }
        archivo << frase << std::endl;
    }

    archivo.close();
}

void mostrarFrases(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    //verificamos si el archivo no esta vacio
    if (!archivo) {
        std::cerr << "Error al abrir el archivo para leer." << std::endl;
        return;
    }

    std::string linea;
    std::cout << "Contenido del archivo " << nombreArchivo << ":" << std::endl;
    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;
    }
    //cerrando archivo
    archivo.close();
}
