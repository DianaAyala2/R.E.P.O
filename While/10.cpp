#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Hola, ingresa un numero entre 1 y 10: ";
    cin >> numero;
    int i = 1;
    if (numero > 0 && numero <= 10)
    {
        cout << numero;
    }
    else
    {
        while (i < numero)
        {
            cout << "Ingresa un dentro del rango pedido:";
            cin >> numero;
            i++;
        }
        return 0;
    } 
}