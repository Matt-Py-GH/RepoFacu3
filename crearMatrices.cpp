#include<iostream>
using namespace std;

int main(){

int largoVector;

cout<<"Indique la cantidad de columnas de la matriz de 3 filas: ";
cin>>largoVector;

int vectorUno[largoVector];
int vectorDos[largoVector];
int vectorTres[largoVector];

cout<<"Introduzca los elementos de la primera fila: ";
for(int i=0; i<largoVector; i++){
    cin>>vectorUno[i];
}

cout<<"Introduzca los elementos de la segunda fila: ";
for(int i=0; i<largoVector; i++){
    cin>>vectorDos[i];
}

cout<<"Introduzca los elementos de la tercera fila: ";
for(int i=0; i<largoVector; i++){
    cin>>vectorTres[i];
}

cout<<"Matriz completa\n";
for(int i=0; i<largoVector; i++){
    cout<<vectorUno[i]<<" ";
}

cout<<"\n";

for(int i=0; i<largoVector; i++){
    cout<<vectorDos[i]<<" ";
}

cout<<"\n";

for(int i=0; i<largoVector; i++){
    cout<<vectorTres[i]<<" ";
}

cout<<"\n";

  return 0;
}
