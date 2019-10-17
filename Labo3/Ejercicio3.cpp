//JOSE DANIEL MAURICIO GUERRERO 00089719
#include <iostream>
#include <string>
using namespace std;

//DECLARO LA ESTRUCTURA
struct libros {
    string titulo;
    int npaginas;
    libros *sig;
};
typedef struct libros libro;

//FUNCION PARA BUSCAR LIBRO
void Buscar_libro(libro* datos,string titulo){
    if(datos){
        if(datos->titulo == titulo){
            cout << "Numero de paginas: " << datos->npaginas <<endl;
        }else{
            Buscar_libro(datos->sig,titulo);
        }
    }else{
        return;
    }
}

//DECLARACION DEL MAIN
int main() {
    int opcion,npag=0;
    string titulo;
    libro *direccion=NULL;
    do{
        libro *nuevo= new libro();
        cout<<"Selecciona una opcion:"<<endl;
        cout<<"1) Agregar"<<endl;
        cout<<"2)Buscar libro"<<endl;
        cout<<"3)salir"<<endl;
        cin>>opcion;

        //COMPARAR OPCION
        switch(opcion){
            case 1:
                cout<<"Digite el titulo del libro : "<<endl;
                cin>>titulo;
                cout<<"Digite la cantidad de paginas  : "<<endl;
                cin>>npag;

                //PASO DE VALORES AL STRUCT
                nuevo->sig=NULL;
                nuevo->titulo=titulo;
                nuevo->npaginas=npag;
                if(!direccion){
                    direccion=nuevo;
                }
                else{
                    nuevo->sig=direccion;
                    direccion=nuevo;
                }
                break;
            case 2:
                cout<<"Digite titulo del libro a buscar: "<<endl;
                cin>>titulo;
                Buscar_libro(direccion,titulo);
                break;
        }
    }
    while(opcion!=3);
    return 0;
}
