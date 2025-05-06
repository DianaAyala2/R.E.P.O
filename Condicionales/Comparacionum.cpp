#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int d,j;
    cout << "Please enter two numbers"<<endl;
    cout << "Enter the first number please: ";
    cin>>d;
    cout << "Enter the second number please: ";
    cin>> j;
    
    if (d==j)
    {
        cout << "Both numbers are equal "<<endl;
    }
    else if (d>j)
    {
        cout <<"The number: "<<d<<" is greater than "<<j<<endl;
    } else {
        cout << "The number: "<<d<<" is less than "<<j<<endl;

    }
return 0;
}