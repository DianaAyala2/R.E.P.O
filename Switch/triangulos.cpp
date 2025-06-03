#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    int triangle;
    cout << "Hi, please enter the measurements of three sides of a triangle: " << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3)
    {
        triangle = 1; //triangulo equilatero (todos los lados seran iguales)
    }
    else if (side1 == side2 || side1 == side3 || side2==side3)
    {
        triangle = 2; // isosceles (solo dos lados iguales)
    }
    else
    {
        triangle = 3; //escaleno (lados diferentes)
    }

    switch (triangle)
    {
    case 1:
        cout << "The triangle is: " << "equilateral "<< endl;
        break;
    case 2:
        cout << "The triangle is: " << "isosceles" << endl;
        break;
    case 3:
        cout << "The triangle is: " << "scalene" <<endl;
        break;
    default:
        cout << "Please enter an integer value" << endl;
        break;
    }
    return 0;
}