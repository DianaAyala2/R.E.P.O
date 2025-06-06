#include <iostream>
using namespace std;
int main()
{
    int sum = 0, npar;
    int i = 1;
    cout << "Por favor ingresa un numero :): ";
    cin >> npar;
    while (i <= npar)
    {
        if (i % 2 == 0)
        {
            sum += i; 
        }
        i++;
    }
    cout << "La suma de los numeros pares hasta el numero que ingresaste es: " << sum << endl;
    return 0;
}