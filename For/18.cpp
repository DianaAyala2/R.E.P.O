#include <iostream>
using namespace std;
int main()
{
    int n, digmayor = 0; // digmayor para ir comparando el numero que se ingreso con la condicion que esta dentro del bucle.
    cout << "Ingresa un numero por favor: ";
    cin >> n;
    if (n < 0)
    {
        n = -n;
    }
    else
    {
        for (; n > 0; n = n / 10) // se divide entre 10 para eliminar el digito que quedo en el residuo de la division.
        {
            int dmayor = n % 10;//para obtener el residuo de la division del numero que se ingreso.
            if (dmayor > digmayor)
            {
                digmayor = dmayor;
            }
        }
    }
    cout << "El digito mayor al numero que ingresaste es:" << digmayor << endl;
    return 0;
}
