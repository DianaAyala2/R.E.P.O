#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (n >= 1)
        {
            cout << -i << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}

