#include<iostream>
using namespace std;


void OrdenamientoBurbuja(int arregloDeEnteros[], int largoArreglo){

for(int i=0; i<=largoArreglo; i++){
    for(int j=0; j<=largoArreglo; j++){
        if(arregloDeEnteros[j]>arregloDeEnteros[j+1]){
            int auxiliar = arregloDeEnteros[j];
            arregloDeEnteros[j] = arregloDeEnteros[j+1];
            arregloDeEnteros[j+1] = auxiliar;
        }
    }
}


}


int main(){

int cantidadDeElementos;
cout<<"Ingrese la cantidad de elementos que tiene el arreglo: ";
cin>>cantidadDeElementos;

int arregloDeEnteros[cantidadDeElementos];

cout<<"Ingrese los elementos del arreglo:\n";

for(int i=0; i<=cantidadDeElementos; i++){
    cin>>arregloDeEnteros[i];

}

cout<<"Arreglo original: ";
for(int i=0; i<=cantidadDeElementos; i++){
    cout<<arregloDeEnteros[i]<<" ";
}

cout<<endl;

OrdenamientoBurbuja(arregloDeEnteros, cantidadDeElementos);

cout<<"Arreglo ordenado: ";
for(int i=0; i<=cantidadDeElementos; i++){
    cout<<arregloDeEnteros[i]<<" ";
}


return 0;
}
