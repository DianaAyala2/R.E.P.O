#include <iostream>
using namespace std;
int main (){
    int tarifa,preciof;
    cout << "Hola, por favor ingresa tu consumo de kwh mensual: ";
    cin>> tarifa;
    preciof= tarifa * 0.14;
    if (tarifa<100){
        cout<< ">>Su tarifa de consumo es baja, usted debe pagar: "<<preciof<< " dolares"<<endl; 
    } else if (tarifa>=100 && tarifa<200 ){
        cout << "Su tarifa de consumo es media, usted debe pagar: "<<preciof<< " dolares"<<endl;
    } else {
        cout << "Su tarifa de consumo es alta, usted debe pagar: "<<preciof<< " dolares"<<endl;
    }
    return 0;
}