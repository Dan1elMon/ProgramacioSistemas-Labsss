#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"\t\t\tElija una opción\n\n";
    cout<<"1 Ingreso\n";
    cout<<"2 Modificación\n";
    cout<<"3 consultas\n";
    cout<<"4 Reportes\n";
    cout<<"5 Utilidades\n";
    cout<<"6 Salir\n\n";
    cin>>m;
    switch(m)
    {
        case 1:cout<<"Ud tiene S/. 2500"<<endl;break;
        case 2:cout<<"¿Que desea modificar?"<<endl;break;
        case 3:cout<<"Escriba su consulta aqui: "<<endl;break;
        case 4:cout<<"Ud. no presenta reportes"<<endl;break;
        case 5:cout<<"Este servicio esta bloqueado por el momento"<<endl;break;
        case 6:cout<<"Ya esta fuera"<<endl;break;
        default: cout<<"El valor ingresado no esta en el menu"<<endl;
    }
cin.ignore();return 0;
}