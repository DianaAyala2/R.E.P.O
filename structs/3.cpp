#include <iostream>
using namespace std;
struct Productos
{
    string producto;
    double precio;
    int cantidad;
};
void ingresarproductos(Productos p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Producto n: " << i + 1 << endl;
        cout << "Ingresa el producto: ";
        cin >> p[i].producto;
        cout << "Ingresa su precio: ";
        cin >> p[i].precio;
        cout << "Ingresa la cantidad que hay en el inventario: ";
        cin >> p[i].cantidad;
    }
}
    void mostrarproductos(Productos p[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Productos ingresados: "<<endl;
            cout << p[i].producto<<endl;
            cout << p[i].precio<<endl;
            cout << p[i].cantidad <<endl;
        }
    }
int main()
{
    int n;
    cout << "Ingrese la cantidad de productos que desee:  ";
    cin >> n;
    Productos inventario[n];
    ingresarproductos(inventario, n);
    mostrarproductos(inventario, n);
    return 0;
}