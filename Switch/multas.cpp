#include <iostream>
using namespace std;
int main (){
    int multas;
    cout << "Hola, por favor ingresa el numero de multas que tienes: ";
    cin >> multas;
    switch (multas){
        case 0:
        cout << "Felicidades, no tienes riesgos de perder la licencia."<<endl;
        break;
        case 1:
        cout << "Felicidades, tu riesgo es muy pequeñn de perder la licencia."<<endl;
        break;
        case 2:
         cout << "Tu riesgo es pequeno de perder la licencia."<<endl;
        break;
        case 3:
         cout << "Tu riesgo es alto."<<endl;
        break;
        default:
        cout << "Tu riesgo es muy alto"<<endl;
        break;
    }
    return 0;
}