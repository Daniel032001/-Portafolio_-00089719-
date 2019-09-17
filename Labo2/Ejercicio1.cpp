//JOSE DANIEL MAURICIO GUERRERO 00089719
#include<iostream>
using namespace std;

/*MACHOTE EN EL MAIN
 int main(){
    int mcd=0;
    int menor=0, mayor=0;
    cout<<"Digite el numero menor: "<<endl;cin>>menor;
    cout<<"Digite el numero mayor: "<<endl;cin>>mayor;
    
    if(menor>mayor){
        cout<<"Tas pendejo we"<<endl;
       
    }else{
        if(mayor%menor==0){
            mcd=menor;
            cout<<"MCD: "<<mcd;
        }else{
            mayor=menor;
            menor=mcd;
            cout<<"El residuo es: "<<menor;
        }
    }
}
 
 */


//CODIGO EN FUNCIONES: 
#include<iostream>
using namespace std;

int residuo(int,int);

int main(){
    int mcd=0;
    int menor=0, mayor=0;
    cout<<"Digite el numero menor: "<<endl;cin>>menor;
    cout<<"Digite el numero mayor: "<<endl;cin>>mayor;
    if(menor>mayor){
        cout<<"Tas pendejo we"<<endl;
       
    }else{
        cout<<"El mcd es: "<<residuo(mayor,menor);
    }
}

int residuo(int mayor, int menor){
if(mayor%menor==0){
            return menor;
        }else{
   
   return residuo(menor,mayor%menor);
        }
}