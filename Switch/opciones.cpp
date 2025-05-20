#include <iostream>
using namespace std; 
int main (){
    int option;
    string user, user1, password, password1, password2;

    cout << "---------------------MENU---------------------"<<endl;
    cout << "|Select a option to continue:                 |"<<endl;
    cout << "|1. Create an account                         |"<<endl;
    cout << "|2. Log in                                    |"<<endl;
    cout << "|3. Change password                           |"<<endl;
    cout << "|4. Exit                                      |"<<endl;
    cout<< "|_____________________________________________|"<<endl;
    cout<< "Option: ";
    cin >> option;

    switch (option) {
        case 1:
       cout << "Create a user and a password to continue: "<<endl;
        cout << "Create a user: ";
        cin>> user1;
        cout << "Create a password: ";
        cin>> password2; 
        break;
        case 2:
        cout << "Enter your username and password to continue :)"<<endl;
        cout << "User: ";
        cin>> user;
        cout << "Password: ";
        cin>> password;
        if (user==user1 && password==password2)
        {
            cout << "The username and password are correct"<<endl;
        } else {
            cout << "The username and password are incorrect"<<endl;
        }
        break;
        case 3:
        cout << "Enter your current password: ";
        cin>> password2;
        cout << "Create a new password: ";
        cin>> password1;
        break;
        case 4: 
        cout << "Log out to exit"<<endl;
        break;
        default:
        cout << "Please select a valid option :)"<<endl;
        break; 
    }
    return 0;
}