#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a;
    cout <<"Hi please enter your age: "; // solicitar que la persona ingrese su edad
    cin>> a;

if (a<18)
{
    cout<< "You are a minor";
} else if (a==18){
    cout<< "You are of legal age";
} else {
    cout << "You are a adult";
}
return 0;

}
