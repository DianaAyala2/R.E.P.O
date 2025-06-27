#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Ingresa un numero por favor: ";
    cin >> N;
    int i = 1;
    int factorial = 1;
    if (i < 0)
    {
        cout << "Ingresa un numero mayor que 0";
    }
    else
    {
        while (i <= N){
        factorial *= i;
        i++;
        }
    }
    cout << "El factorial del numero que ingresaste es: " << factorial << endl;
    return 0;
}
