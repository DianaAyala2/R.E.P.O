#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int energy;
    cout << "Hi:), please enter your monthly energy consumption: ";
    cin>>energy;

    if (energy<100){
        cout<< "Your energy rate is low"<<endl;
    } else if (energy>=100 && energy<=200){
        cout << "your energy rate is average"<<endl;
    } else {
        cout << "your energy rate is high"<<endl;
    }
    return 0;
}