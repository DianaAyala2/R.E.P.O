#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year;
    cout << "Hi :), please enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "The year you entered, " << year<<  ",  is a leap year "<<endl;
    }
    else
    {
        cout << "The year you entered is not a leap year " << endl;
    }
    return 0;
}