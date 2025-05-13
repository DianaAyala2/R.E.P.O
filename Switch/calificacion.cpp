#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int score;
    char grade;
    cout << "Please enter your final grade (0-100): ";
    cin>> score;
    if (score>=90 && score<100)
    {
        grade='A';
        cout << "Your have a ";
    } else if (score<90 && score>=80)
    {
        grade='B';
        cout << "You have a ";
    } else if (score<80 && score>=70)
    {
        grade='C';
        cout << "You have a ";
    } else if (score<70 && score>=60)
    {
        grade='D';
        cout << "You have a ";
    } else if (score<60) {
        grade='F';
        cout << "Your have a ";
    } else {
        cout << "Invalid number, ";
    }

    switch (grade) {

    case 'A':
    cout << grade <<endl;
    break;
    
    case 'B':
    cout << grade <<endl;
    break;
    
    case 'C':
    cout << grade <<endl;
    break;
    
    case 'D':
    cout << grade <<endl;
    break;
    
    case 'F':
    cout << grade <<endl;
    break;
    default: 
    cout << "please enter a number from 0 to 100 "<<endl;
    break;
    }
    return 0;
}