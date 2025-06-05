#include <iostream>
using namespace std;
int main (){
    int  n, num2, suma=0;
    cout << "Hola :), por favor ingresa un numero para saber la cantidad de digitos: ";
    cin>> n;
    int num[n];
    for (int i=0; i < n; i++){
        cout << "Por favor ingresa tu numero (1 por 1): "; //colocar el numero 1 por 1 para realizar la suamtoria :]
        cin>> num2;
        suma += num2;
    }
        cout << "La suma de sus digitos es: "<< suma <<endl;
    }
  

