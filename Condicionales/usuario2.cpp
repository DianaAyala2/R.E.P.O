#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string user = "carnet";
    string password = "12345";
    string user1, password1;
    cout << "Please enter your user and password for log in: " << endl;
    cout << "User: ";
    cin >> user1;
    cout << "Password: ";
    cin >> password1;

    if (user == user1 && password == password1)
    {
        cout << "The user and password are correct :)"<<endl;
        return 0;
    }
   
    else {
        cout << "The user and password are incorrect, you have two attempts left, try again :) " << endl;
        cout << "User: ";
        cin >> user1;
        cout << "Password: ";
        cin >> password1;
    }
    if (user == user1 && password == password1)
    {
        cout << "The user and password are correct :)"<<endl;
        return 0;
    }
    else {
        cout << "The user and passowrd are incorrect, you only have one try left :) " << endl;
        cout << "User: ";
        cin >> user1;
        cout << "Password: ";
        cin >> password1;
    }
    if (user == user1 && password == password1)
    {
        cout <<"The user and password are correct :)"<<endl;
    } else {
        cout << "The user and password are incorrect, wait 15s for try again" << endl;

    }
    return 0;
}