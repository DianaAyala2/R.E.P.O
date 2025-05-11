#include <iostream>
#include <cmath>
using namespace std; 
int main () 
{
    int speed;
    cout << "Enter the speed at which you drive: ";
    cin >>speed;
    if (speed>60 && speed<=80)
    {
        cout << "You have a fine for having a speed greater than 60 km/h"<<endl;
    }
    else if (speed>80)
    {
        cout << "Your fine is higher for exceeding 80 km/h"<<endl;
    }
    return 0;
}