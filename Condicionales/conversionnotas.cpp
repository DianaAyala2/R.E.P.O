#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int score;
    char grade;
    cout << "Hi, please enter ypur final grade (0-100 ): ";
    cin>>score;

    if (score>=90 && score<=100)
    {
    grade ='A';
    cout << "Congrats!, you have a "<<grade<<endl;
    }
    else if (score<90 && score>=80)
    {grade = 'B';
    cout << "Congrats!, you have a "<<grade<<endl;
    } 
    else if (score<80 && score>=70)
    {
        grade ='C';
        cout << "You have a "<<grade<<endl;

    } else if (score<70 && score>=60)
    {
        grade= 'D';
        cout << "You have a "<<grade<<endl;
    } else {
        grade='F';
        cout << "You have a "<<grade<<endl;
    }
    return 0;
}