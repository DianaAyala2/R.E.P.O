#include <iostream> 
using namespace std;
int main (){
    double a, resultado;
    int Opcion;
    cout << "Por favor ingrese un numero: ";
    cin>> a;
    //Mostrar al usuario las formas de conversiones de dolares a otras monedas
    cout << "Por favor seleccione una opcion de conversion" <<endl;
    cout << "1. cm a pulgadas" <<endl;
    cout << "2. metros a pies" <<endl;
    cout << "3. km a millas" <<endl;
    cout << "Opcion:" ;
    cin >> Opcion;
    //Utlizar switch para mostrar los diferentes casos en las conversiones
    switch (Opcion){
        case 1:
        resultado= a*0.39;
        cout<< "La conversion de centimetros a pulgadas es:"<<resultado<<endl;
        break;
        case 2:
        resultado= a*3.28;
        cout<< "la cantidad de metros a pies es:"<<resultado<<endl;
        break;
        case 3: 
        resultado= a*0.62;
        cout<< "La cantidad de kilometros a millas es:"<<resultado<<endl;
        break;
        default:
        cout << "Selecciona una opcion valida."<<endl;
        break;
    }
return 0;
}