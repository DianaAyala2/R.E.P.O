#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Hi, please enter a number: ";
    cin >> num;
    int n1 = 0, n2 = 1, n3;
    for (int i = 1; i <= num; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << "The first terms of the series are: "<< n1 <<endl;
    }
    return 0;
}