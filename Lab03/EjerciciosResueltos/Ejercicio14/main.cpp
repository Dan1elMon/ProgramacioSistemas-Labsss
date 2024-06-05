#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int valorrnd = 0;
    int valorusr = 0; //numero introducido por el jugador
    int contador = 0; //Para registrar el numero de iteraciones
    srand(time(NULL)); //Generamos semilla basada en el reloj
    valorrnd = 1 + rand()%10;
    cout << "Este programa genera un valor entre 1 y 10, tiene 2 oportunidades" << endl;
    cout << "para acertar el número correcto." << endl;
    do{
        contador +=1;
        cout << "Escribe un número entre 1 y 10" << endl;
        cin >> valorusr;
        if (valorusr == valorrnd) {
            cout << "Ganaste!, el número es correcto" << "(" << valorrnd << ")";
            break;
        }else{
                cout << "Lo siento, el numero no es ese." << endl << endl;
        }
    }while (contador < 2);
    if(contador = 3 ){
        cout << "Perdiste, más suerte para la próxima, el número es: " << valorrnd;
    } return 0;
}