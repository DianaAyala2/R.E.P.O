#include <iostream>
using namespace std;
int main (){
    int n, num, suma=0, prom;
    cout << "Hola, por favor ingresa un numero: ";
    cin >> n;
    for (int i = 1; i <=n; i++){
        cout << "Ingresa un numero "<<  i << ": ";
        cin >> num;
        suma += num;
    }
    prom = suma/n;
    cout << "El promedio es: "<< prom <<endl;
    return 0;
}