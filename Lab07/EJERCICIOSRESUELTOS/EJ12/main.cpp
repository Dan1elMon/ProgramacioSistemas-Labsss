#include <iostream>
#include <cmath>
using namespace std;

static const int EDOMINIO = 100; // codigo de error para error de dominio
static const int ERANGO = 101;   // codigo de error para error de rango

class ErrorMat
{
public:
    ErrorMat() : motivo(0) {}; // Constructor por defecto, inicializa motivo a 0
    ErrorMat(int m) : motivo(m) {}; // Constructor que inicializa motivo con un valor dado
    const char* porque() const throw(); // Método para obtener una descripción del error
private:
    int motivo; // Código de error
};

const char* ErrorMat::porque() const throw()
{
    switch (motivo)
    {
        case EDOMINIO: return "Error de Dominio "; // Devuelve el mensaje "Error de Dominio"
        case ERANGO: return "Error de Rango "; // Devuelve el mensaje "Error de Rango"
        default: return "Error Desconocido"; // Devuelve "Error Desconocido" (no debería ocurrir)
    }
}

double logaritmo(const double n)
{
    try {
        if (n < 0) throw(ErrorMat(EDOMINIO)); // Lanza una excepción ErrorMat con código EDOMINIO si n es negativo
        if (n == 0) throw(ErrorMat(ERANGO)); // Lanza una excepción ErrorMat con código ERANGO si n es cero
        return log(n); // Devuelve el logaritmo natural de n si n es válido
    }
    catch (ErrorMat& e) {
        cout << e.porque(); // Captura la excepción ErrorMat y imprime el motivo del error
    }
    return 0; // Devuelve 0 en caso de error
}

int main()
{
    double r = 100;
    cout << "log(" << r << ") = " << logaritmo(r) << endl; // Calcula y muestra el logaritmo de 100
    cout << "log(-" << r << ") = " << logaritmo(-r) << endl; // Intenta calcular y muestra el logaritmo de -100 (causará un error)
    cin.get(); // Espera una entrada del usuario antes de cerrar el programa
    return 0;
}
