#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Clase base para todas las excepciones
class ComputerException {
protected:
    string message;
public:
    ComputerException(const string& msg) : message(msg) {}
    virtual const char* what() const noexcept {
        return message.c_str();
    }
};

// Excepción para errores de entrada
class InputException : public ComputerException {
public:
    InputException(const string& msg) : ComputerException("InputException: " + msg) {}
};

// Excepción para errores de procesamiento
class ProcessorException : public ComputerException {
public:
    ProcessorException(const string& msg) : ComputerException("ProcessorException: " + msg) {}
};

// Excepción para errores de salida
class OutputException : public ComputerException {
public:
    OutputException(const string& msg) : ComputerException("OutputException: " + msg) {}
};

// Clase que simula la entrada desde un teclado
class Keyboard {
public:
    void readFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            throw InputException("No se puede abrir el fichero " + filename);
        }

        string content;
        while (getline(file, content)) {
            cout << content << endl;
        }

        file.close();
    }
};

// Clase que simula el procesamiento de datos
class Processor {
public:
    void process() {
        // Simulación de un error en el procesamiento
        throw ProcessorException("Error durante el procesamiento");
    }
};

// Clase que simula la salida a un dispositivo
class Printer {
public:
    void print(const string& output) {
        if (output.empty()) {
            throw OutputException("No hay contenido para imprimir");
        }
        cout << "Imprimiendo: " << output << endl;
    }
};

int main() {
    Keyboard keyboard;
    Processor processor;
    Printer printer;
    string filename;

    while (true) {
        try {
            cout << "Ingrese la ruta del fichero: ";
            cin >> filename;
            keyboard.readFromFile(filename);
            
            // Simulación del procesamiento
            processor.process();
            
            // Simulación de la salida
            printer.print("Contenido procesado");

            break;  // Si todo va bien, salir del bucle
        }
        catch (const InputException& e) {
            cout << e.what() << endl;
            cout << "Por favor, intente nuevamente." << endl;
        }
        catch (const ProcessorException& e) {
            cout << e.what() << endl;
            cout << "Error irrecuperable en el módulo de procesamiento. Terminando el programa." << endl;
            break;
        }
        catch (const OutputException& e) {
            cout << e.what() << endl;
            cout << "Error irrecuperable en el módulo de salida. Terminando el programa." << endl;
            break;
        }
        catch (const ComputerException& e) {
            cout << e.what() << endl;
            break;  // Salir en caso de otras excepciones de ComputerException
        }
        catch (...) {
            cout << "Error desconocido." << endl;
            break;
        }
    }

    return 0;
}
