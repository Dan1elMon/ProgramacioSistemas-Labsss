#include <iostream>
#include <limits>  // Necesario para std::numeric_limits
using namespace std;

int main() {
    try {
        int num;
        cout << "Ingrese un número entero: ";
        cin >> num;

        if (cin.fail()) {  // Verificar si la entrada fue incorrecta
            cin.clear();  // Limpiar el estado de error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorar caracteres restantes en el buffer
            throw invalid_argument("Entrada inválida: No es un número entero.");
        }

        cout << "Número ingresado: " << num << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
