//JOSE DANIEL MAURICIO GUERRERO 00089719
#include <iostream>
using namespace std;
int main() {
    int tamanio=7,valor=1,n=0,inicio=0,posicion=0;
    int colacircular[tamanio];
    while(valor!=0){
        cout<<"ingresa un numero diferente de 0 o 0 para salir"<<endl;
        cin>>valor;
        posicion=(inicio+n)%tamanio;
        colacircular[posicion]=valor;
        cout<<"Valor ingresado : "<<colacircular[posicion]<<" en la posicion " <<posicion<<endl;
        n++;
    }
    return 0;
}

