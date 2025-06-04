#include <iostream>
using namespace std;

int main (){
    int zodiaco;
    cout << "Hola, por favor ingresa tu mes de nacimiento (1-12): ";
    cin >> zodiaco;
    
    switch (zodiaco){
        case 1:
        cout << "Tu signo es Capricornio o Acuario"<<endl;
        break;
        case 2:
        cout << "Tu signo es Acuario o Piscis"<<endl;
        break;
        case 3:
        cout << "Tu signo es Piscis o Aries "<<endl;
        break;
        case 4:
        cout << "Tu signo es Aries o Tauro"<<endl;
        break;
        case 5:
        cout << "Tu signo es Tauro o Geminis"<<endl;
        break;
        case 6:
        cout << "Tu signo es Geminis o Cancer"<<endl;
        break;
        case 7:
        cout << "Tu signo es Cancer o Leo"<<endl;
        break;
        case 8:
        cout << "Tu signo es Leo o Virgo"<<endl;
        break;
        case 9:
        cout << "Tu signo es Virgo o Libra"<<endl;
        break;
        case 10:
        cout << "Tu signo es Libra o Escorpio"<<endl;
        break;
        case 11:
        cout << "Tu signo es Escorpio o Sagitario"<<endl;
        break;
        case 12:
        cout << "Tu signo es Sagitario o Capricornio"<<endl;
        break;
        default:
        cout << "Ingresa un numero dentro del rango";
        break;
    }
    return 0;
}