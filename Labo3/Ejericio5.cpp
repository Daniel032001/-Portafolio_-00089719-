//JOSE DANIEL MAURICIO GUERRERO 00089719
#include <iostream>
#include <string>
using namespace std;
struct Nodo {
    string palabra;
    Nodo *sig ;
};

//DECLARAR LISTA
Nodo *lista = NULL ;

//CREACION DE FUNCIONES

//FUNCION MOSTRAR
void mostrar (Nodo *lista){
    Nodo *nuevo;
    nuevo = lista;
    if(nuevo != NULL ){
        mostrar(nuevo->sig);
        cout << nuevo->palabra<<endl;
    }
}
//FUNCION INSERTAR
void insertar(Nodo *&lista,string n){
    Nodo *nuevo= new Nodo ();
    nuevo->palabra= n;

    Nodo *auxiliar1 = lista,*auxiliar2 ;
    while ((auxiliar1 != NULL )){
        auxiliar2 = auxiliar1 ;
        auxiliar1 = auxiliar1->sig;
    }
    if ( lista == auxiliar1){
        lista = nuevo;
    }else {
        auxiliar2->sig= nuevo;
    }
    nuevo->sig= auxiliar1;
}

//DECLARACION DEL MAIN
int main (){
    int opcion;
    string palabra;
    bool continuar=true;
    do{
        cout << "1)Ingresar  palabra a la lista"<<endl;
        cout <<"2)Mostrar lista al reves"<<endl;
        cout << "3)Salir"<<endl;
        cin>> opcion ;
        switch (opcion){
            case 1:
                cout << "Digite una palabra: "<<endl;
                cin >> palabra;
                insertar(lista, palabra);
                break;
            case 2:
                cout<<"Valores ingresados : "<<endl;
                mostrar(lista);
                break;
            case 3:
                continuar=false;
                break;
        }
    }while(continuar);
    return 0;
}