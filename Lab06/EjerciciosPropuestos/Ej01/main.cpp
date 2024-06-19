#include <iostream>
#include <fstream>

// Definición de la estructura Tdato
struct Tdato
{
    int b;
    char s[100];
};

int main() {
    int x, n, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    double f;
    char nombre[] = "Ejercicios ficheros binarios";
    Tdato p;
    std::ifstream f1;
    std::ofstream f2;

    f1.open("entrada.dat", std::ios::binary);
    f2.open("salida.dat", std::ios::binary);

    if (!f1 || !f2) {
        std::cerr << "Error al abrir los archivos" << std::endl;
        return 1;
    }

    // a. Escribir el dato entero x en el fichero.
    f2.write(reinterpret_cast<const char*>(&x), sizeof(x));

    // b. Escribir el dato double f en el fichero.
    f2.write(reinterpret_cast<const char*>(&f), sizeof(f));

    // c. Escribir los 5 primeros elementos del array a en el fichero.
    f2.write(reinterpret_cast<const char*>(a), 5 * sizeof(int));

    // d. Escribir los 10 primeros caracteres de la cadena nombre en el fichero.
    f2.write(nombre, 10 * sizeof(char));

    // e. Escribir el dato de tipo Tdato p en el fichero.
    f2.write(reinterpret_cast<const char*>(&p), sizeof(p));

    // Cerrar el archivo de salida después de escribir
    f2.close();

    // f. Leer un dato entero del fichero y almacenarlo en la variable x.
    f1.read(reinterpret_cast<char*>(&x), sizeof(x));

    // g. Leer un dato double del fichero y almacenarlo en la variable f.
    f1.read(reinterpret_cast<char*>(&f), sizeof(f));

    // h. Leer 5 enteros y almacenarlos en el array a.
    f1.read(reinterpret_cast<char*>(a), 5 * sizeof(int));

    // i. Leer 10 caracteres y almacenarlos en la cadena nombre.
    f1.read(nombre, 10 * sizeof(char));
    // Asegurar que la cadena esté terminada en nulo si es necesario
    nombre[10] = '\0';

    // j. Leer un dato de tipo Tdato y almacenarlo en la variable p.
    f1.read(reinterpret_cast<char*>(&p), sizeof(p));

    // Cerrar el archivo de entrada después de leer
    f1.close();

    return 0;
}
