#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a, b; // solicitar dos numeros
    cout << "Please enter a number: ";
    cin >> b;
    a= pow(b,b); //formula para elevar el numero a la n veces

    if (a%2==0)
    {
        cout<< "the number: "<<a<< " is even"<<endl;
    } else {
        cout<< "the number: "<<a<< " is odd"<<endl;
    
    }
if (b<0)
{
    cout<< "The number you entered: "<<b<<" is negative"<<endl;
} else{
    cout << "The number you entered: "<<b<<" is positive"<<endl;
}
}