//JOSE DANIEL MAURICIO GUERRERO 00089719
#include <iostream>
using namespace std;
int contador = 3,contador2=0,matriz[5][5];
int valor;
int main(){

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    for (int x = 0; x < 5; x++) {
        switch(x){
            case 1:
                contador--;break;
            case 2:
                contador=1;
                contador2++;break;
            case 3:
                contador=0;
                contador2++;break;
            case 4:
                contador2++;break;

        }
        for (int y = contador2; y < 5 - (contador); y++) {
            cout << "Digite valor a introducir en la matriz: ";
            cin >> valor;
            matriz[x][y] = valor;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int n = 0; n < 5; n++) {
            cout << matriz[i][n];
        }
        cout << endl;
    }
    return 0;
}

