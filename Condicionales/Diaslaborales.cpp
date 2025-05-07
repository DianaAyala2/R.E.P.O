#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int num;
    cout << "Hello :), please enter a number from 1 to 7 for continue: ";
    cin>> num;

    if (num>=1 && num<=5) 
    {
        cout << "The number that you enter corresponds to workday :( "<<endl;
    } else if (num==6 || num==7) {
        cout << "The number that you enter corresponds to weekend :) "<<endl;
    }
    return 0;
}