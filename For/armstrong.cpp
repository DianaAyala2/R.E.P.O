#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    int armstrong = n;
    double suma = 0;
    for (; n > 0; n = n / 10) // para dividir el numero por digitos
    {
        double xd = n % 10;
        suma += pow(xd, 3);
    }
    
    if (suma == armstrong)
    {
        cout << "El numero que ingresaste si es un numero de armstrong."<<endl;
    }
    else
    {
        cout << "el numero que ingresaste no es un numero de armstrong"<<endl;
    }
    return 0;
}