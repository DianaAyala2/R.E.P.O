#include <iostream>
using namespace std; 
int main (){
    double num;
    cout << "Ingresa un numero: ";
    cin >> num;
    int base= 1;
    int bnumero= num; //guardar el numero ingresado en una nueva variable para poder multiplicarla por 2
    while (base <= bnumero / 2){
        base *= 2;
    }

    while (base > 0){
        if (num >= base){
        cout << "1";
        num-=base;
        } else {
            cout << "0";
        }
        base /= 2;
    }
    cout <<endl;
    return 0;
}