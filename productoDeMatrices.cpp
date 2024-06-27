#include<iostream>
#include<stdlib.h>  ///biblioteca para el rand
#include<time.h>    ///biblioteca para el rand
using namespace std;


int main(){

int filasA, columnasA, filasB, columnasB;
cout<<"Ingrese el numero de filas de la matriz A: ";
cin>>filasA;
cout<<"Ingrese el numero de columnas de la matriz A: ";
cin>>columnasA;

cout<<"Ingrese el numero de filas de la matriz B: ";
cin>>filasB;
cout<<"Ingrese el numero de columnas de la matriz B: ";
cin>>columnasB;

float matrizA[filasA][columnasA];
float matrizB[filasB][columnasB];
float matrizC[filasA][columnasB];

if(columnasA != filasB){
        cout<<"No se pueden multiplicar estas matrices...\n";
}
else{
    cout<<endl<<endl;
    for(int i=0; i<filasA; i++){
        for(int j=0; j<columnasA; j++){
            cout<<"Ingrese el valor de la matriz A "<<"("<<i<<","<<j<<"): ";
            cin>>matrizA[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<filasB; i++){
        for(int j=0; j<columnasB; j++){
            cout<<"Ingrese el valor de la matriz B "<<"("<<i<<","<<j<<"): ";
            cin>>matrizB[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<filasA; i++){
        for(int j=0; j<columnasB; j++){
            matrizC[i][j] = 0;
        }
    }

    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            for (int k = 0; k < columnasA; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout<<endl<<endl;
    cout<<"Matriz A\n\n";
    for(int i=0; i<filasA; i++){
        for(int j=0; j<columnasA; j++){
        cout<<"|  "<<matrizA[i][j]<<"  |";
    }
    cout<<endl;
}

    cout<<endl<<endl;
    cout<<"Matriz B\n\n";
    for(int i=0; i<filasB; i++){
        for(int j=0; j<columnasB; j++){
        cout<<"|  "<<matrizB[i][j]<<"  |";
    }
    cout<<endl;
}

    cout<<endl<<endl;
    cout<<"Matriz C\n\n";
    for(int i=0; i<filasA; i++){
        for(int j=0; j<columnasB; j++){
        cout<<"|  "<<matrizC[i][j]<<"  |";
    }
    cout<<endl;
}



}

return 0;

}
