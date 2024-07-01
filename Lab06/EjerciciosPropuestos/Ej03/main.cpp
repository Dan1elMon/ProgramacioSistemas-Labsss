#include <iostream>
#include <fstream>
#include <string>

void mostrarContenidoConPausa(const std::string& nombreArchivo, int lineasPorPagina = 25);

int main() {
    std::string nombreArchivo;  // creamos una variable nombreArchivo

    // solicitamos que introduzca el nombre del archivo
    std::cout << "Introduce el nombre del archivo: ";
    std::getline(std::cin, nombreArchivo);  // lee el nombre del archivo
    // llamamos a la función para mostrar el contenido del archivo con pausas
    mostrarContenidoConPausa(nombreArchivo);
    return 0;
}

// función que muestra el contenido del archivo
void mostrarContenidoConPausa(const std::string& nombreArchivo, int lineasPorPagina) {
    //abrimois el archivo
    std::ifstream archivo(nombreArchivo);

    //verifica si el archivo se abrió correctamente
    if (!archivo) {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return;  // si hay un error salimos de la función
    }

    std::string linea;  //variable para almacenar cada línea leída del archivo
    int contadorLineas = 0;  // Contador de líneas leídas

    // leeremos cada linea con un bucle
    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;  // Muestra la línea en la consola
        contadorLineas++;  // Incrementa el contador de líneas

        // haremos la pasa cada 25 lineas
        if (contadorLineas % lineasPorPagina == 0) {
            std::cout << "Pulsa Enter para continuar..." << std::endl;
            std::cin.get();  //espera el enter
        }
    }
    archivo.close();  // cerramos el archivo
}
