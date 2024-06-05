#ifndef TANQUE_H
#define TANQUE_H

class Tanque {
private:
    double contenido;

public:
    static const int capacidad = 5000;
    Tanque();
    double getContenido() const;
    void agregar(double cantidad); // no superar la capacidad
    void sacar(double cantidad); // no sacar más de lo que hay
    void sacaMitad(); // elimina la mitad del contenido del tanque
};

#endif // TANQUE_H
