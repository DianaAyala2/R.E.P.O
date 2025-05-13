#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int age;
    string ticket, ticket1, ticket2;
    cout << "Hi :), please enter the age to determine the entry price: ";
    cin>> age;
    if (age<5) 
    {
        ticket="free";
        cout << "Entrance to the park is: "<<ticket<<endl;
    } else if (age>=5 && age<=12)
    {
        ticket1="$5";
        cout << "The entrance fee to the park is: "<<ticket1<<endl;
    } else {
        ticket2="10";
        cout << "The entrance fee to the park is: "<<ticket2<<endl;
    }
return 0;
}