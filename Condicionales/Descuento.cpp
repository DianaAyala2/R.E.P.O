#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double s, x;
    cout<< "Please enter your purchase total: "; //if your purchase total is greater than $100 you will receive a 10 percent discount
    cin>>s;
    x=(s - (s * 0.1));

    if (s>100) {
        cout<< "You receive a 10 percent discount!, your purchase total is: "<<x<<endl;
    } else {
        cout<< "Your purchase total is less than $100 "<<endl;
    }
    return 0;
}