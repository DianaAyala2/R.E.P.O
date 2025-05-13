#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int day;
    cout << "Please enter a number from 1 to 7: ";
    cin>> day;

    if (day==1)
    {
        cout << "Day 1 is: "<<endl;
    } else if (day==2) {
        cout << "Day 2 is: "<<endl;
    } else if (day==3){
        cout << "Day 3 is: "<<endl;
    } else if (day==4) {
        cout << "Day 4 is: "<<endl;
    }else if (day==5) {
        cout << "Day 5 is: "<<endl;
    }else if (day==6) {
        cout << "Day 6 is: "<<endl;
    }else if (day==7) {
        cout << "Day 7 is: "<<endl;
    }else {
        cout << "The number you entered does not fall within the range 1 to 7"<<endl;
    }

    switch (day) {
        case 1: 
        cout << "Monday" <<endl;
        break;
        case 2: 
        cout << "Tuesday" <<endl;
        break;
        case 3: 
        cout << "Wednesday" <<endl;
        break;
        case 4: 
        cout << "Thursday" <<endl;
        break;
        case 5: 
        cout << "Friday" <<endl;
        break;
        case 6: 
        cout << "Saturday" <<endl;
        break;
        case 7: 
        cout << "Sunday" <<endl;
        break;
        default:
        cout << "Pick another one number"<<endl;
        break;
    }
    return 0;
}