#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Persona
struct Persona {
    string nombre;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
};

// Función para ingresar los datos de las personas
void ingresarDatos(Persona personas[], int numPersonas) {
    for (int i = 0; i < numPersonas; ++i) {
        cout << "Persona " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Día de nacimiento: ";
        cin >> personas[i].diaNacimiento;
        cout << "Mes de nacimiento: ";
        cin >> personas[i].mesNacimiento;
        cout << "Año de nacimiento: ";
        cin >> personas[i].anioNacimiento;
    }
}

// Función para mostrar las personas que cumplen años en un mes específico
void mostrarCumpleanierosEnMes(const Persona personas[], int numPersonas, int mes) {
    cout << "Personas que cumplen años en el mes " << mes << ":" << endl;
    bool encontrado = false;

    for (int i = 0; i < numPersonas; ++i) {
        if (personas[i].mesNacimiento == mes) {
            cout << "Nombre: " << personas[i].nombre << endl;
            cout << "Fecha de nacimiento: " << personas[i].diaNacimiento << "/" << personas[i].mesNacimiento << "/" << personas[i].anioNacimiento << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No hay personas que cumplan años en este mes." << endl;
    }
}

int main() {
    const int numPersonas = 8;
    Persona personas[numPersonas];

    // Ingresar datos de las personas
    ingresarDatos(personas, numPersonas);

    // Ciclo principal para buscar por mes de nacimiento
    int mesBusqueda;
    do {
        cout << "Ingrese el número de mes para buscar (1-12), o 0 para salir: ";
        cin >> mesBusqueda;

        if (mesBusqueda >= 1 && mesBusqueda <= 12) {
            mostrarCumpleanierosEnMes(personas, numPersonas, mesBusqueda);
        } else if (mesBusqueda != 0) {
            cout << "Número de mes inválido. Intente nuevamente." << endl;
        }

    } while (mesBusqueda != 0);

    cout << "Programa terminado." << endl;

    return 0;
}
