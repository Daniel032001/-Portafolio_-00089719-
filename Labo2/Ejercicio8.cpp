//JOSE DANIEL MAURICIO GUERERO 00089719
#include <iostream>
using namespace std;

int ncifras=0;
//DECLARO QUE LA FUNCION VA ARECIBIR UN VALOR ENTERO
int cantcifras(int);

//DECLARO EL MAIN
int main() {
    int cifra;
    cout<<"Digite una cantidad entera: "<<endl;cin>>cifra;
    cout<<"La cantidad de cifras es: "<<cantcifras(cifra);
    return 0;
}
//DECLARO LA VARIABLE ENTERA DE LA FUNCION
int cantcifras(int cantidad){
    if(cantidad==0){
        return ncifras;
    }
    else{
        cantcifras((cantidad/10));
        ncifras++;
    }
}
