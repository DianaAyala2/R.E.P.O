#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    double notas[5];
};
double promedionotas(Estudiante e) //crear variable 
{
    double suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += e.notas[i];
    }
    return suma / 5;
}
void Imprimirdatos(Estudiante e)
{
    //Estudiante e;
    cout << "Nombre: " << e.nombre << endl;
    cout << "Notas: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << e.notas[i] << endl;
    }
}
int main()
{
    Estudiante e;
    cout << "Ingresa tu nombre sin espacios: ";
    cin >>e.nombre;
    cout << "Ingresa tus notas: ";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " ";
        cin >> e.notas[i];
    }
    Imprimirdatos(e);
    cout << "Su promedio es: " << promedionotas(e) << endl;
    return 0;
}