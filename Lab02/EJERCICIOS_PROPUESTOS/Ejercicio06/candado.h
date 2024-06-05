#ifndef CANDADO_H
#define CANDADO_H

class Candado {
private:
    int combinacionSeguridad[3];
    int combinacionActual[3];

public:
    Candado(int digito1, int digito2, int digito3);

    void cambiarDigito(int posicion, int nuevoDigito);
    bool puedeAbrir() const;
    bool mismaCombinacionActual(const Candado& otroCandado) const;
};

#endif // CANDADO_H
