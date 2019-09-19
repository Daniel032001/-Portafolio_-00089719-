#include<iostream>
#include<stack>
using namespace std;

int mediana=0,tamanio=5,mitad=2;
stack<int> pila;

int funmediana(){
		mediana=(tamanio/mitad);
		for(int i=0; i<mediana; i++){
			pila.pop();
		}
		return pila.top();
	}
	
int main(){
	pila.push(1);
	pila.push(2);
	pila.push(3);
	pila.push(4);
	pila.push(5);
	cout<<"La mediana es: "<<funmediana();
	return 0;
}
	