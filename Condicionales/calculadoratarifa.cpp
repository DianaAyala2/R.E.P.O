#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double peso;
    cout << "Hello :), please enter the weight of your package to know the shipping rate: ";
    cin>> peso;
    if (peso<=5)
    {
        cout << "You need to pay $5 :)."<<endl;
    } else if (peso >= 6 && peso <= 10)
    {
        cout << "Your need to pay $10 :)."<<endl;
    } else {
        cout << "You need tou pay $15 :). "<<endl;
    }
   return 0; 
}