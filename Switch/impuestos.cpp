#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int option;
    double a, isss, afp, rent, Ta, copy;            // Ta= total salary
    cout << "Hi, please enter your monthly salary: "; // ask to user to enter his monthly salary
    cin >> a;
    cout << "--------------------MENU--------------------" << endl;
    cout << "|Select a option that you need to continue: "; // ask to user to select a option according to their needs
    cout << "|1 ISSS                                     |";
    cout << "|2 AFP                                      |";
    cout << "|3 Income                                   |";
    cout << "|4 All                                      |";
    cout << "|5 EXIT                                     |";
    cin >> option;
    cout << "_____________________________________________";

    switch (option)
    {
    case 1:
        if (a >= 1000)
        {
            isss = a - 30;
            cout << "Your monthly salary with the isss discount is: " << isss << endl;
            break;
        }
        else
        {
            isss = (a * 0.03);
            cout << "You need to pay 3% more ";
        }
        break;
    case 2:
        cout << "The discount does not apply. " << endl;

        afp = (a * 0.0725);
        cout << "Your monthly salary with the discount is: " << afp << endl;

        break;
    case 3:

        if (a <= 472.99 && a > 0)
        {
            cout << "The discount does not apply "; // the discount does not apply because the salary is minor than 472.99
        }
        else if (a > 472.99 && a <= 895.24)
        {
            isss = (a * 0.03);
            afp = (a * 0.0725);
            rent = (a - (isss + afp)) * 0.1;
            cout << "The total of the rent discount is: " << rent << endl;
        }
        else if (a >= 895.25 && a <= 2038.10)
        {
            isss = (a * 0.03);
            afp = (a * 0.0725);
            rent = (a - (isss + afp)) * 0.2;
            cout << "The total of the rent discount is: " << rent << endl;
        }
        else if (a < 2038.10)
        {
            isss = (a * 0.03);
            afp = (a * 0.0725);
            rent = (a - (isss + afp)) * 0.3;
            cout << "The total of the rent discount is: " << rent << endl;
        }
        break;
    case 4:
        isss = (a >= 1000) ? 30 : a * 0.03;
        afp = a * 0.0725;

        if (a <= 472.99)
            rent = 0;
        else if (a <= 895.24)
            rent = (a - isss - afp) * 0.1;
        else if (a <= 2038.10)
            rent = (a - isss - afp) * 0.2;
        else
            rent = (a - isss - afp) * 0.3;

        cout << "ISSS: $" << isss << endl;
        cout << "AFP: $" << afp << endl;
        cout << "Renta: $" << rent << endl;
        cout << "Total after all deductions: $" << a - isss - afp - rent << endl;
        break;
        case 5:
        cout << "Bye :)"<<endl;
        break;
    default:
        cout << "invalid option" << endl;
        break;
    }
    return 0;
}