#include <iostream>
#include <cmath>
#include <stdexcept>  // Necesario para std::runtime_error
using namespace std;

// Definición de excepciones personalizadas
class NoRaicesReales : public runtime_error {
public:
    NoRaicesReales() : runtime_error("La ecuación no tiene raíces reales.") {}
};

class PrimerCoeficienteCero : public runtime_error {
public:
    PrimerCoeficienteCero() : runtime_error("El primer coeficiente de la ecuación es cero.") {}
};

// Función para calcular las raíces cuadráticas
void raicesCuadraticas(double a, double b, double c) {
    if (a == 0) {
        throw PrimerCoeficienteCero();
    }

    double discriminante = b*b - 4*a*c;
    if (discriminante < 0) {
        throw NoRaicesReales();
    }

    double raiz1 = (-b + sqrt(discriminante)) / (2*a);
    double raiz2 = (-b - sqrt(discriminante)) / (2*a);

    cout << "Raíces de la ecuación cuadrática:" << endl;
    cout << "Raíz 1 = " << raiz1 << endl;
    cout << "Raíz 2 = " << raiz2 << endl;
}

int main() {
    try {
        double a, b, c;
        cout << "Ingrese los coeficientes de la ecuación cuadrática (ax^2 + bx + c = 0):" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;

        raicesCuadraticas(a, b, c);
    }
    catch (const PrimerCoeficienteCero& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const NoRaicesReales& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
