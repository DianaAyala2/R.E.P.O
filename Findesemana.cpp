#include <iostream>
using namespace std;
int main()
{
    int opcion;
    cout << "Que quisieras hacer el fin de semana?: " << endl; // En este caso me preguntaron que me preferiría hacer sabiendo que necesitaba estudiar
    cout << "1 Quedarse en la casa y estudiar" << endl;
    cout << "2 Ir a donde mis abuelos" << endl;
    cout << "opcion (1 o 2): ";
    cin >> opcion;
    switch (opcion)
    {
    case 1: // en caso de elegir la opcion 1
        cout << "Has decidido quedarte en la casa. " << endl;
        int comidaCasa;
        cout << "Que quisieras almorzar? " << endl; // considerando la opcion 1
        cout << "1 Deseas pedir algo " << endl;
        cout << "2 o buscar que hay en la casa" << endl;
        cout << "opcion (1 o 2): ";
        cin >> comidaCasa;
        if (comidaCasa == 1)
        {
            cout << "Elegiste pedir algo de comer" << endl;
        }
        else if (comidaCasa == 2)
        {
            cout << "Buscaras algo de comer en la casa" << endl;
        }
        else
        {
            cout << "Opcion no valida ";
        }
        break;
    case 2: // en caso de haber elegido la opcion 2
        cout << "Has decidido visitar a tus abuelos"<<endl;
        cout << "Que quisieras pedir para almorzar?" <<endl;
        int comidadefuera;
        cout << "1 Pizza" << endl;
        cout << "2 Hamburguesas" << endl;
        cout << "opcion (1 o 2): ";
        cin >> comidadefuera;

        if (comidadefuera == 1)
        {
            cout << "Elegiste pedir Pizza" << endl;
        }
        else if (comidadefuera == 2)
        {
            cout << "Elegiste pedir Hamburguesas" << endl;
        }
        else
        {
            cout << "opcion no valida ";
        }
        break;
    }
    if (opcion == 2) // considerar que aunque la opcion elegida sea b, igual tendrá que estudiar xd
    {
        cout << "Como decidiste visitar a tus abuelos, tendras que estudiar al regresar." << endl;
    }
    else if (opcion == 1)
    {
        cout << "Como decidiste quedarte tendras que estudiar. " << endl;
    }
    return 0;
}
