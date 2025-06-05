#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num, factorial=1;
    cout << "Hola :), por favor ingresa un numero: ";
    cin>> num;
    if (num < 0){
        cout << "Ingrese un numero mayor que 0 por favor.";
    } else {
        for (int i= 1; i <= num; i++){
        factorial *= i;
    }
     cout << "El factorial de "<< num << " es: "<< factorial <<endl;
    }
    
    return 0;
}