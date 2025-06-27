#include <iostream>
using namespace std;
int main()
{
    int n;
    double pi = 0.0; // para determinar los valores que aproximaran pi

    cout << "Ingresa un numero: ";
    cin >> n;
    if (n < 0)
    
    {
        cout << "Ingresa un numero mayor a cero: " << endl;
        
    }
    
    else
    {
        for (int i = 0; i < n; i++)   
        {
            double serie1;
            if (i % 2 == 0)
            {
                serie1 = 1.0; // se utiliza 1 para seguir la formula
            }
            else
            {
                serie1 = -1.0;
            }
        double nterminos = serie1 / (2 * i + 1);
        pi += nterminos;   
    }
    
        pi *= 4;
        cout << "La aproximacion con el numero que ingresaste es: " << pi << endl;
    
    return 0;
}
}