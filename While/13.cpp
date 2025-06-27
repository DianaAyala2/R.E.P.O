#include <iostream>
using namespace std;
int main (){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int num = 0, num2 = 1, num3;
    int i = 1;
    while (i <= numero){
        num3 = num + num2;
        num = num2;
        num2 = num3;
        cout << "Los primeros numeros de la serie son: "<< num <<endl;
        i++;
    }
    return 0;
}