// 8,16,22,26
#include<iostream>
using namespace std;
int tamanio=0;
int iteracion=0,suma=0;
double promedio=0;

int main(){

    cout<<"Ingrese tamanio del arreglo: "<<endl;
    cin>>tamanio;
    int arreglo[tamanio];

    for(int i=0;i<tamanio;i++){
        cout<<"Digite valor ["<<iteracion<<"]"<<endl;
        iteracion++;
        cin>>arreglo[i];
    }
    for(int i=0;i<tamanio;i++){
        suma+=arreglo[i];
        promedio=(suma/tamanio);

    }

    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio;


}