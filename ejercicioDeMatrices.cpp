//Realice un programa que le pida al usuario 2 arreglos y forme un tercer arreglo
//con la suma de los elementos de los dos arreglos ingresados
#include<iostream>
using namespace std;

int main(){

const int tamanioArreglos = 8;
const char marcaDeAgua[8] = "Delgado";

int arregloUno[tamanioArreglos];
int arregloDos[tamanioArreglos];
int arregloResultante[tamanioArreglos];

for(int i=0; i<=tamanioArreglos; i++){
    cout<<"Ingrese el elemento del primer arreglo: ";
    cin>>arregloUno[i];
    cout<<"Ingrese el elemento del segundo arreglo: ";
    cin>>arregloDos[i];
    arregloResultante[i] = arregloUno[i] + arregloDos[i];
}

for(int i=0; i<=tamanioArreglos; i++){
    cout<<arregloResultante[i]<<" ";
}


cout<<"Programa hecho por: "<<marcaDeAgua<<endl;

return 0;

}
