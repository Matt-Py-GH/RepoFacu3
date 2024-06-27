#include<iostream>
#include<stdlib.h>  ///biblioteca para el rand
#include<time.h>    ///biblioteca para el rand
using namespace std;


int main(){

int filas, columnas = 0;
cout<<"Ingrese el numero de filas: ";
cin>>filas;
cout<<"Ingrese el numero de columnas: ";
cin>>columnas;

float matrizA[filas][columnas];
float matrizB[filas][columnas];
float matrizC[filas][columnas];

///metodo para hacerlo aleatorio srand(time(NULL));

cout<<"\nIngrese los valores de la matriz A\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"Inserte el elemento "<<"("<<i<<","<<j<<"): ";
        cin>>matrizA[i][j];
        ///matrizA[i][j] = rand()%50;  metodo random
    }
}

cout<<"\n\nIngrese los valores de la matriz B\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"Inserte el elemento "<<"("<<i<<","<<j<<"): ";
        cin>>matrizB[i][j];
    }
}

cout<<"\n\nMatriz A\n\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"|  "<<matrizA[i][j]<<"  |";
    }
    cout<<endl;
}

cout<<"\nMatriz B\n\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"|  "<<matrizB[i][j]<<"  |";
    }
    cout<<endl;
}

for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
    }
    cout<<endl;
}

cout<<"\nMatriz C\n\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"|  "<<matrizC[i][j]<<"  |";
    }
    cout<<endl;
}



  return 0;
}
