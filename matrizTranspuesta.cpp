#include<iostream>
using namespace std;


int main(){

int filas, columnas;

cout<<"Introduzca las filas de la matriz: ";
cin>>filas;
cout<<"Introduzca las columnas de la matriz: ";
cin>>columnas;

float matriz[filas][columnas];

cout<<endl<<endl;
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"Introduzca el elemento "<<"("<<i<<","<<j<<")";
        cin>>matriz[i][j];
    }
}

cout<<"Matriz normal\n\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"|  "<<matriz[i][j]<<"  |";
    }
    cout<<endl;
}

cout<<"Matriz transpuesta\n\n";
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"|  "<<matriz[j][i]<<"  |";
    }
    cout<<endl;
}


return 0;

}
