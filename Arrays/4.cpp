#include <iostream>
using namespace std;
int main()
{
    int numero, num;
    cout << "Ingresa un numero: ";
    cin >> numero;
    int xd[numero];

    for (int i = 0; i < numero; i++)
    {
        cout << "Ingresa el numero para guardarlo: ";
        cin >> num;
        int j;
        for (j = 0; j < i; j++)
        {

            if (xd[j] == num)
            {
                cout << " Ya esta en el arreglo." << endl;
            }
        }
        xd[i] = num;
    }
    return 0;
}
