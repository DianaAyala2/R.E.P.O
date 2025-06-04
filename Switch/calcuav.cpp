#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num1, num2, result;
    char option;
    cout << "Hi:), enter two numbers different from 0: "<<endl;
    cout << "Num1: ";
    cin>>num1;
    cout<< "Num2: ";
    cin>>num2;
    cout << "select an arithmetic operation: "<<endl;
    cout<< "a. Addition"<<endl;
    cout << "b. Subtraction"<<endl;
    cout << "c. Multiplication"<<endl;
    cout << "d. Division"<<endl;
    cout << "e. Potenciacion"<<endl;
    cout << "f. Modulo"<<endl; //residuo de una division
    cout<< "select an option: ";
    cin>>option;

    if (option=='a') {
        cout << "The result is: ";
    } else if (option=='b'){
        cout <<"The result is: ";
    } else if (option=='c'){
        cout << "The result is: ";
    } else if (option=='d'){
        cout << "The result is: "; // se podia poner sin switch xd
    } else if (option=='e'){
        cout << "The result is: ";
    } else if (option=='f'){
        cout << "The result is: ";
    } else {
        cout<< "select a valid option"<<endl;
    }

    switch (option) {
        case 'a': 
        result=num1+num2;
        cout << result <<endl;
        break;
        case 'b':
        result=num1-num2;
        cout << result <<endl;
        break;
        case 'c':
        result = num1 * num2;
        cout << result <<endl;
        break;
        case 'd':
        result=num1/num2;
        cout << result <<endl;
        case 'e':
        result=pow(num1,num2);
        cout << result <<endl;
        case 'f':
        result=num1 % num2;
        cout << result <<endl;
        break;
    }
return 0;
}