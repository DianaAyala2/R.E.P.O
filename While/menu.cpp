#include <iostream>
#include <string>
using namespace std;
int main()
{
    int opcion;
    string contrasena, usuario;

    do
    {
        cout << "Hola, por favor selecciona una opcion para continuar:) " << endl;
        cout << "1. Iniciar sesion" << endl;
        cout << "2. Crear cuenta" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Has iniciado sesion" << endl;
            break;
        case 2:
            cout << "Ingresa un usuario y contrasena: " << endl;
            cout << "Usuario: ";
            cin >> usuario;
            cout << "Contrasena: ";
            cin >> contrasena;
            break;
        case 3:
            cout << "Has salido de manera exitosa de tu cuenta :)" << endl;
            break;
            default: 
            cout << "selecciona una opcion valida"<<endl;
        }
    } 
    while (opcion != 3);
    return 0;
}