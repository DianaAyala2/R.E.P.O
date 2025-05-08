#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num1, num2;
    cout << "Hi :), can you please enter your final grade average and the total number of fouls you had"<<endl;
    cout << "Final grade average: ";
    cin >> num1;
    cout << "Total number of fouls: ";
    cin >> num2;

    if (num1>=85 && num2<3 )
    {
        cout << "Congrats!, you received a scholarships for your studies :). "<<endl;
    } 
    else
    {
        cout << "We're sorry :(, your scholarship was not accepted a scholarship for your studies. "<<endl;
    }
    return 0;
}