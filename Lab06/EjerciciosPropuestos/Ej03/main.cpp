#include <iostream>
#include <fstream>
#include <string>

void mostrarContenidoConPausa(const std::string& nombreArchivo, int lineasPorPagina = 25);

int main() {
    std::string nombreArchivo;

    std::cout << "Introduce el nombre del archivo: ";
    std::getline(std::cin, nombreArchivo);

    mostrarContenidoConPausa(nombreArchivo);

    return 0;
}

void mostrarContenidoConPausa(const std::string& nombreArchivo, int lineasPorPagina) {
    std::ifstream archivo(nombreArchivo);

    if (!archivo) {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }

    std::string linea;
    int contadorLineas = 0;

    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;
        contadorLineas++;

        if (contadorLineas % lineasPorPagina == 0) {
            std::cout << "Pulsa Enter para continuar..." << std::endl;
            std::cin.get();
        }
    }

    archivo.close();
}
