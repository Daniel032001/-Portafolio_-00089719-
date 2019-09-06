#include <iostream>

using namespace std;

int main()
{
    int numero;
    int x;
    int y; 
    
    
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    
        if(numero==1){
            
            cout<<"Numero: "<<numero<< " Caso Base"<<endl;
            
        }else{
            
            x =numero-1;
            cout<<"numero recursivo1: "<<x<<endl;
            
        }    
            
            
    int recc(int n);       
         if(numero<=1){
         
            
            cout<<"Numero: "<<numero<< " Caso Base"<<endl;
            
        }else{
            
            y =numero-2;
            cout<<"numero recursivo2: "<<y<<endl;    
    
   cout<<y<<endl;
   cout<<x<<endl;
   cout<<numero<<endl;
   
   cout<<x<<endl;
   cout<<y<<endl;
   
    return 0;
    }
}
