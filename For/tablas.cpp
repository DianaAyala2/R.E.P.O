#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num;
    cout << "Hola, por favor ingresa un numero: ";
    cin >> num;

    for (int i = 1; i<= 10; i++ ){
        cout << num << " x " << i << " = " << num * i <<endl;
    }
    return 0; 
}