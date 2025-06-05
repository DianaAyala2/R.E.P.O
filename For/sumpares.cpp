#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero, suma=0;
    cout << "Hola, por favor ingresa un numero par :) : ";
    cin >> numero;
    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    cout << "La suma de los numeros pares desde 1 hasta " << numero << " es: " << suma <<endl;
    return 0;
}