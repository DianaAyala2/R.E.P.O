#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double sum = 0, n1;
    int n = 0;
    do
    {
        cout << "Ingresa tus calificaciones por favor: " << endl;
        // cout << "Nota: "<<endl;
        cin >> n1;
        if (n1 > 0)
        {
            sum += n1;
            n++;
        }

    } while (n1 > 0);
    double promedio = sum / n;
    if (n1 < 0)
    {
        cout << "Tu promedio final es: " << promedio << endl;
    }
    else
    {
        cout << "la nota que ingreso no es valida";
    }

    return 0;
}