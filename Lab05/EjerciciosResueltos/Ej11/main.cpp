#include <iostream>
using namespace std;

//declarando estrucutra punto
struct Punto{
    int x,y;
};
int main(){
    Punto punto[7] = {0,0};
    //ingresando valores a la estrucutra usando un buce
    for(int i = 0; i < 7; i++){
        cout <<"Introduce la altura de la curva en " <<i - 3;
        cout <<": ";
        cin >> punto[i].y;
        cout <<endl;
    }
    cout <<"Las coordenadas son: " <<endl;

    for(int i = 0; i < 7; i++){
        cout <<"(" <<i - 3 <<"," <<punto[i].y <<")\n";
    }
    return 0;
}