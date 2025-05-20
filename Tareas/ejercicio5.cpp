#include <iostream>
using namespace std;
int main()
{
    int n;
    int even = 0, odd = 0;
    cout << "Hi, enter a number please: ";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number " << i + 1<< ": ";
        cin >> num[i];

        if (num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The total of even numbers is: " << even << endl;
    cout << "The total of odd numbers is: " << odd << endl;
    return 0;
}