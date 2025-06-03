#include <iostream>
using namespace std;
int main (){
    int month;
    cout << "Hi, please enter a number to show you how many days that month has: ";
    cin>> month;
    
    if (month == 1){
        cout << "The month 1 has: ";
    } else if (month == 2){
        cout << "The month 2 has: ";
    } else if (month == 3){
        cout << "The month 3 has: ";
    }else if (month == 4){
        cout << "The month 4 has: ";
    }else if (month == 5){
        cout << "The month 5 has: ";
    } else if (month == 6){
        cout << "The month 6 has: ";
    }else if (month == 7){
        cout << "The month 7 has: ";
    }else if (month == 8){
        cout << "The month 8 has: ";
    }else if (month == 9){
        cout << "The month 9 has: ";
    }else if (month == 10){
        cout << "The month 10 has: ";
    }else if (month == 11){
        cout << "The month 11 has: ";
    }else if (month == 12){
        cout << "The month 12 has: ";
    } else {
        cout << "Select a number from 1 to 12 :)";
    }

    switch (month){
        case 1: 
        cout << "31 days";
        break;
        case 2:
        cout << "28 days";
        break;
        case 3: 
        cout << "31 days";
        break;
        case 4:
        cout << "30 days";
        break;
        case 5: 
        cout << "31 days";
        break;
        case 6: 
        cout << "30 days";
        break;
         case 7: 
        cout << "31 days";
        break;
         case 8: 
        cout << "31 days";
        break;
         case 9: 
        cout << "30 days";
        break;
         case 10: 
        cout << "31 days";
        break;
         case 11: 
        cout << "30 days";
        break;
         case 12: 
        cout << "31 days";
        break;
        default:
        cout << "Enter a valid number :)";
        break;
    }
    return 0;
}