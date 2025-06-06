#include <iostream> 
using namespace std;
int main (){
    int contra, password=12345;
    cout << "Hola, por favor ingrese su contrasena: ";
    cin >> contra;
    while (contra != password){
        cout << "Vuelva a ingresar su contrasena para iniciar sesion: ";
        cin>>contra;
    }
    cout << "Has iniciado sesion."<<endl;
    return 0;
}