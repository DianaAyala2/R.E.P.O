#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero, prom = 0;
    cout << "Ingresa un numero: ";
    cin >> numero;
    int sum = 0;
    int promedio[numero];
    for (int i = 0; i < numero; i++)
    {
        cout << "Ingrese otro numero por favor: ";
        cin >> promedio[i];
    }
    for (int o = 0; o < numero; o++)
    {
        sum += promedio[o];        
    }
     prom = (sum/ numero);
    cout << "El promedio es: " << prom << endl;
    return 0;
}