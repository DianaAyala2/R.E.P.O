#include <iostream>
using namespace std;
int main()
{
    int base, exponente, potencia = 1;
    cout << "Hola, por favor ingresa dos numeros: " << endl;
    cout << "Numero 1: ";
    cin >> base;
    cout << "Numero 2: ";
    cin >> exponente;
    // empieza en 1, porque un número elevado a la 0 siempre será 1.
    for (int i = 1; i <= exponente; i++)
    {
        potencia *= base;
    }
    cout << "El resultado es: " << potencia << endl;
    return 0;
}