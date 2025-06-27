#include <iostream>
using namespace std;
int main()
{
    int n, n2;
    cout << "Ingresa dos numeros: " << endl;
    cout << "numero 1: ";
    cin >> n;
    cout << "numero 2: ";
    cin >> n2;
    int i = 1;
    int MCD = 0;
    while (n2 != 0)
    {
        
        MCD = n2; //guardar el valor del segundo numero para luego igualarlo.
        n2 = n % n2; // el segundo numero debe de tener de residuo la division del primer y segundo numero.
        n = MCD;
        i++;
        
    }
    cout << "El MCD de los numeros que ingresaste es: " << MCD << endl;
    return 0;
}