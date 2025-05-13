#include <iostream>
#include <cmath>
using namespace std;
int main (){
    string password1, password2;
    cout << "Please create a password to continue"<<endl;
    cout << "Enter your password: ";
    cin>>password1;
    cout << "Confirm your password: ";
    cin>> password2;
    if (password1==password2)
    {
        cout <<"The passwords match"<<endl;
        cout << "Accept the conditions to continue :)"<<endl;

    } else {
        cout << "the passwords don't match :(, please try again."<<endl;
    }
    return 0;
}