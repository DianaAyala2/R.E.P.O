#include <iostream>
using namespace std;
int main()
{
    int option;
    cout << "Hola, por favor selecciona un tipo de comida para mostrar las calorias que tiene: " << endl;
    cout << "1 = fruta " << endl;
    cout << "2 = verduras" << endl;
    cout << "3 = carne" << endl;
    cout << "Opcion: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "una fruta tiene 25 calorias (promedio)." << endl;
        break;
    case 2:
        cout << "una verdura tiene 65 calorias (promedio)." << endl;
        break;
    case 3:
        cout << "las carnes tienen 143 calorias (promedio por porcion)." << endl;
        break;
    default:
        cout << "Selecciona un numero dentro del rango de opciones" << endl;
        break;
    }
    return 0;
}