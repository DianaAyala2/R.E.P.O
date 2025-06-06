#include <iostream>
using namespace std;
int main (){
    int nsecreto=22;
    int intento;
    cout << "Adivina el numero secreto:) "<<endl;
    cout << "Ingresa un numero del 1 al 100: ";
    cin >> intento;

   
    while (intento != nsecreto){
        if (intento > nsecreto){
        cout << "Ingresa otro numero para volver a intentarlo: ";
        } else {
            cout << "El numero que ingresaste es incorrecto, vuelve a intentarlo: ";
        }
        cin >> intento;
    }
    cout << "Felicidades!, adivinaste el numero secreto :)"<<endl;
}