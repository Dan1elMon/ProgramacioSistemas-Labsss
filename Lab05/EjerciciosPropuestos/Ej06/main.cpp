#include <iostream>

using namespace std;

// Define the 'Persona' struct
struct Persona {
  string nombre;
  string apellido;
  int edad;
};

int main() {
  // Declare a 'Persona' struct variable
  Persona persona;

  // Prompt for and store user input
  cout << "Ingrese su nombre: ";
  getline(cin, persona.nombre);

  cout << "Ingrese su apellido: ";
  getline(cin, persona.apellido);

  cout << "Ingrese su edad: ";
  cin >> persona.edad;

  // Display the stored information
  cout << "\nPersona: " << persona.nombre << ", " << persona.apellido << ", " << persona.edad << " años" << endl;

  return 0;
}
