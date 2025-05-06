#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int r;
    cout << "Hi, please enter your grade: ";
    cin>>r;
   
    if (r<60){
        cout<< "You did not pass the course "<< r<<" is minor than 60"<<endl;
    } else if (r>60) {
        cout<< "You passed the course!"<<endl;
    } else {
        cout << "You passed with the minimum grade"<<endl;
    }
return 0;
}