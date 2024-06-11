#include <iostream>
using namespace std;

//declarando estrucutura fecha
struct Fecha{
    int dia,mes,anio;
};
int main(){
    //dclarando dos fechas, y verificando si coinciden para saber si es el cumpleañios
    Fecha hoy, cumpleanios;
    cout <<"Ingrese la fecha de hoy" <<endl;
    cout <<"Dia: "; cin >> hoy.dia;
    cout <<"Mes: "; cin >> hoy.mes;
    cout <<"AÃ±o: "; cin >> hoy.anio;
    cout <<"Ingrese su cumpleaÃ±os" <<endl;
    cout <<"Dia: "; cin >> cumpleanios.dia;
    cout <<"Mes: "; cin >> cumpleanios.mes;
    cout <<"AÃ±o: "; cin >> cumpleanios.anio;
    if(cumpleanios.dia == hoy.dia){
        if(cumpleanios.mes == hoy.mes){
            cout <<"FELIZ CUMPLEANIOOS. FELICITACIONES!!!!" <<endl;
        }else{
            cout <<"Hoy es el mismo dia de tu cumpleaÃ±os." <<endl;
            cout <<"Pero de diferente mes. ";
        }
    }else{
        cout <<"Hoy no es tu cumpleaÃ±os." <<endl;
    }
    return 0;
}
