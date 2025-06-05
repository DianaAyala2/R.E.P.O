#include <iostream>
using namespace std;
int main (){
    int nump, numero=0;
    cout << "Holaa, por favor ingresa un numero: ";
    cin >> nump;
    if ( nump <= 1){
        cout << "El numero que ingreso no es primo"<<endl;
    } else {
        for (int i=2; i < nump; i++){
            if (nump % i == 0){
                numero++;
            }
        }
        if (numero == 0){
            cout << "El numero que ingreso es primo"<<endl;
        } else {
            cout << "El numero que ingreso no es primo."<<endl;
        }
    }
    return 0;
}