#include <iostream>
using namespace std;
int main()
{
    int dia;
    cout << "Hola, por favor ingresa un dia de la semana: " << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "Opcion: ";
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Primera clase: Precalculo, Segunda clase: Matematica discreta 1. " << endl;
        break;
    case 2:
        cout << "Primera clase: fundamentos de programacion, segunda clase: elementos de cc y tercnologia. " << endl;
        break;
    case 3:
        cout << "Primera clase: Precalculo, Segunda clase: Matematica discreta 1. " << endl;
        break;
    case 4:
        cout << "Primera clase: fundamentos de programacion, segunda clase: elementos de cc y tercnologia. " << endl;
        break;
    case 5:
        cout << "Primer clase: precalculo y fin de la jornada." << endl;
        break;
    default:
        cout << "Ingresa un numero del 1 al 5." << endl;
        break;
    }

    return 0;
}