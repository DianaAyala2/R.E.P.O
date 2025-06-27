#include <iostream>
using namespace std;
int main()
{
    int n, suma = 0;
    cout << "Holaaa, por favor ingresa un numero: ";
    cin >> n;
    int numero[n];
    // int suma = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el numero de datos: " << i + 1 << " : "; // sumar 1 para moverse a la siguiente "casilla".
        cin >> numero[i];
    }
    for (int j = 0; j < n; j++)
    {
        suma += numero[j];
    }
    cout << "La suma de los datos es: " << suma << endl;
    return 0;
}