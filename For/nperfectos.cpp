#include <iostream>
using namespace std;
int main()
{
    int n, suma = 0;
    cout << "Ingresa un numero: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            suma += i;
        }
    }
    if ( suma == n){
        cout << "el numero que ingresaste es perfecto."<<endl;
    } else {
        cout << "el numero que ingresaste no es perfecto."<<endl;
    }
    return 0;
}