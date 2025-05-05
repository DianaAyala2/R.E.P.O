#include <iostream>
using namespace std;
int main () {
    int opcion;
    cout << "¿Qué quisiera hacer el fin de semana?: "<<endl; //En este caso me preguntaron que me preferiría hacer sabiendo que necesitaba estudiar
    cout << "1  Quedarse en la casa y estudiar"<<endl;
    cout << "2 Ir a donde mis abuelos"<<endl; 
    cout<< "opcion (1 o 2): ";
    cin >> opcion;
    switch (opcion){
        case 1:
        cout << "Te quedaras en la casa. "<<endl;
        break;
        case 2 :
        cout << "Iras a donde tus abuelos"<<endl;
        break;
        default:
        cout<< "opcion no valida"<<endl;
        return 1;
    }
    if (opcion==2) //considerar que aunque la opcion elegida sea b, igual tendrá que estudiar xd
    {
        cout<< "Pero estudiaras al regresar."<<endl;
    } else if (opcion==1)
    {
        cout << "Tendras que estudiar. "<<endl;
    }
    return 0;
}
