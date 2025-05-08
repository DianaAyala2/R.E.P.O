#include <iostream>
using namespace std;
int main (){
    int user, carnet, password, condicional;
    cout << "Hi :), please enter your user and password to log in: "<<endl;
    cout << "User: "<<endl;
    cin >> user;
    cout << "Password: "<<endl;
    cin >>password;

    if (user==carnet && password==condicional)
    {
        cout << "The user and password are correct :), access granted. ";
    } else {
        cout << "The user and password are incorrect :(. ";
    }
    return 0;
}