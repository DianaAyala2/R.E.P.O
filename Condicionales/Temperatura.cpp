#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num;
    cout << "Hello :), please enter your current temperature in degrees Celcius: ";
    cin>> num;
    if (num < 15)
    {
        cout << "The temperature is cold. "<<endl;
    } else if (num>= 15 && num<=25) 
    {
        cout<< "The temperature is mild.  "<<endl; 
    } else {
        cout << "The temperature is hot. "<<endl;
    }
    return 0;
}