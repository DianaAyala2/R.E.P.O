#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num1, num2;
    cout << "hi :), please enter two numbers:  "<<endl;
    cout << "Number 1: ";
    cin>> num1;
    cout << "Number 2: ";
    cin>> num2;

    if (num1>1000 && num2<1000)
    {
    cout << "The number: "<<num1<< " is closer to 1000 than "<<num2<<endl;
    } else 
    {
        cout << "The number: "<<num2<< " is closer to 1000 than "<<num1<<endl;
    }
    return 0;
 }