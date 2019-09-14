//JOSE DANIEL MAURICIO GUERRERO 00089719
#include <iostream>
using namespace std;

struct Tpila{
    float elements[5];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 4){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

void pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
}

float ultimoElto(Pila *s){
	float y = 0;
	while(!empty(s)){
    	pop(s, &y);
	}
	return y;
}

int main() {
    Pila unaPila;
    initialize(&unaPila);

    if(empty(&unaPila))
        cout << "Esta vacia" << endl;

    //Agregar un valor
    float x = 5.6;
    push(&unaPila, x);
    float z=2.3;
    push(&unaPila, z);
    float w = 7.6;
    push(&unaPila, w);
    float h = 8.6;
    push(&unaPila, h);
    float g = 9.2;
    push(&unaPila, g);
   
    
    	if(!empty(&unaPila))
        	cout << "Ultimo valor: " << ultimoElto(&unaPila) << endl;
    
}