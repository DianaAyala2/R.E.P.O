#include <iostream>
using namespace std;
int main()
{
    int transporte;
    cout << "Hola, por favor selecciona un tipo de transporte para saber su tarifa de pasaje: " << endl;
    cout << "1. Bus" << endl;
    cout << "2. Microbus" << endl;
    cout << "3. Taxi" << endl;
    cout << "Opcion: ";
    cin >> transporte;
    switch (transporte)
    {
    case 1:
        cout << "El precio de tarifa de bus es de $0.20 " << endl;
        break;
    case 2:
        cout << "El precio de tarifa de bus es de $0.25 " << endl;
        break;
    case 3:
        cout << "El precio de tarifa de bus es de $5.20 " << endl; // santa tecla hacia la uca
        break;
    default:
        cout << "Ingresa una opcion valida." << endl;
        break;
    }
    return 0;
}