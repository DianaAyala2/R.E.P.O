#include <iostream> 
using namespace std; 
int main (){
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    int altura = n;
    for (int i = 1; i <= altura; i ++){
    for (int r = 1; r <= i ; r ++){
        cout << "*";
    }
    cout << endl;
    
}
return 0;
}
    
    
