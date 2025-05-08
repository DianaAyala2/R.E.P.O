#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int lado1, lado2, lado3;
    cout << "Hi :), please enter 3 sides of a triangle: "<<endl;
    cout << "Side 1: ";
    cin>> lado1;
    cout << "Side 2: ";
    cin>> lado2;
    cout << "Side 3: ";
    cin >> lado3;
    if (lado1==lado2 && lado2==lado3)
    {
        cout << "The triangle is equilateral :)"<<endl;
    } else if (lado1==lado2 && lado3!=lado2)
    {
        cout << "The triangle is isosceles :)"<<endl;    
    } else {
        cout << "The triangle is scalenes :)"<<endl;
    }
    return 0;
}