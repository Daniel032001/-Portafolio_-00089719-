//JOSE DANIEL MAURICIO GUERRERO 00089719
#include <iostream>
using namespace std;

//DECLARACION DE STRUCTS
struct num{
    int n;
    num *sig;
};
struct sumas{
    int pares,impares;
};

//GENERANDO FUNCIONES
sumas Funcionsuma(num* lista, int pares,int impares);

//DECLARACION DEL MAIN
int main(){
    sumas s;
    int n=0,opc=0,pares=0,impares=0;

    num *pInicio = NULL;
    do{
        cout << "MENU PRINCIPAL"<<endl;
        cout << "1. Agregegar numero "<<endl;
        cout << "2. Mostrar suma de pares e impares"<<endl;
        cout << "0.Salir  "<<endl;
        cout<<"Opcion: "<<endl;

        cin >> opc;
        num *nuevo = new num;
        switch(opc){
            case 1:
                cout << "Ingrese un numero: "<<endl;
                cin >> n;
                nuevo->sig = NULL;
                nuevo->n = n;
                if(!pInicio){
                    pInicio = nuevo;
                }
                else{
                    nuevo->sig = pInicio;
                    pInicio = nuevo;
                }
                break;
            case 2:
                cout << "SUMA DE LOS PARES E IMPARES"<<endl;
                s = Funcionsuma(pInicio,pares,impares);
                cout << "PARES: " <<s.pares <<endl;
                cout << "IMPARES: " << s.impares << endl;
                break;

            default: if(opc!=0 && opc!=1 && opc!=2){
                    cout << "Opcion erronea!"<<endl;

                }break;

        }
    }while(opc!=0);
     cout << "Saliendo..."<<endl;


    return 0;
}
sumas Funcionsuma(num* lista,int pares, int impares){
    if(!lista){
        sumas s;
        s.impares = impares;
        s.pares = pares;
        return s;
    }
    else{
        if(lista->n % 2 == 0){
            pares += lista->n;
            Funcionsuma(lista->sig,pares,impares);
        }
        else{
            impares += lista->n;
            Funcionsuma(lista->sig,pares,impares);
        }
    }
}
