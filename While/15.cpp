#include <iostream>
using namespace std;
int main()
{
    int numero, n2, sum = 0;
    cout << "Ingresa un numero: ";
    cin >> numero;
    int i = 0;
    while (numero > 0)
    {
        cout << "Ingresa el numero nuevamente digito por digito: ";
        cin >> n2;
        int sumdigitos = numero % 10;
        sum += sumdigitos;
        numero = numero / 10;
        i++;
    }
    cout << "La suma de los digitos de es: " << sum << endl;
    return 0;
}