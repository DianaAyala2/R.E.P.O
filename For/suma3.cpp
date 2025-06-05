#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Hola, por favor ingresa un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "El resultado de la suma de los primeros numeros es: " << sum <<endl;
    return 0;
}