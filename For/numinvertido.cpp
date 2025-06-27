#include <iostream>
using namespace std;
int main()
{
    int numero, invertido = 0;
    cout << "Hola, por favor ingresa un numero: ";
    cin >> numero;
    for (; numero != 0; numero = numero / 10)
    {
        int ninvertido = numero % 10;
        invertido = invertido * 10 + ninvertido;
    }
    cout << "= " << invertido << endl;
    return 0;
}