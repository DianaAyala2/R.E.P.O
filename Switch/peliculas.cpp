#include <iostream>
using namespace std;
int main (){
    int edad, grupo1;
    cout << "Hola, por favor ingresa tu edad:) : ";
    cin >> edad;

    if (edad < 7  ){
        grupo1 = 1;
    } else if ( edad < 13){
        grupo1 = 2;
    } else if (edad <17){
        grupo1 = 3;
    }else {
        grupo1 = 4;
    }

    switch (grupo1){
        case 1:
        cout << "Se recomienda mirar peliculas tipo G."<<endl; // para todo publico
        break;
        case 2:
        cout << "Se recomienda mirar peliculas tipo PG."<<endl; // guia paternal sugerida
        break;
        case 3:
        cout << "Se recomienda mirar peliculas tipo PG-13"<<endl; // guia paternal sugerida para menores de 13 años
        break;
        case 4:
        cout << "Se recomienda mirar peliculas tipo R."<<endl; // peliculas restringidas
        break;
        default:
        cout << "tu edad no se pudo clasificar :( "<<endl;
        break;
    }
    return 0;
}