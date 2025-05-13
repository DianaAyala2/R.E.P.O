#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int year;
    cout << "Please enter a number from 1 to 12: ";
    cin>> year;

    if (year==1)
    {
        cout << "The month 1 is ";
    } 
    else if (year==2)
    {
        cout << "The month 2 is ";
    } 
    else if (year==3)
    {
        cout << "The month 3 is ";
    }
    else if (year==4)
    {
        cout << "The month 4 is ";
    }else if (year==5)
    {
        cout << "The month 5 is ";
    }else if (year==6)
    {
        cout << "The month 6 is ";
    }else if (year==7)
    {
        cout << "The month 7 is ";
    }
    else if (year==8)
    {
        cout << "The month 8 is ";
    }else if (year==9)
    {
        cout << "The month 9 is ";
    }
    else if (year==10)
    {
        cout << "The month 10 is ";
    }
    else if (year==11)
    {
        cout << "The month 11 is ";
    }else if (year==12)
    {
        cout << "The month 12 is ";
    } else {
        cout << "Choose a number from 1 to 12";
    }

    switch (year){
        case 1:
        cout << "january";
        break;
        case 2:
        cout << "february";
        break;
        case 3:
        cout << "march";
        break;
        case 4:
        cout << "april";
        break;
        case 5:
        cout << "may";
        break;
        case 6:
        cout << "june";
        break;
        case 7:
        cout << "july";
        break;        
        case 8:
        cout << "august";
        break;        
        case 9:
        cout << "september";
        break;        
        case 10:
        cout << "october";
        break;        
        case 11:
        cout << "november";
        break;        
        case 12:
        cout << "december";
        break;
        default: 
        cout << "the number does not fall within the interval of 1 and 12"<<endl;
        break;
    }
    return 0;
}