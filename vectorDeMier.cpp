#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>elementosEnteros = {10, 20, 30, 40, 50};

    //Imprimir arreglo original
    cout<<"Array original: ";
    for(int i = 0; i < 5; i++){
        cout<<elementosEnteros[i]<<" ";
    }

    //Pusheo de datos
    elementosEnteros.push_back(60);
    elementosEnteros.push_back(70);

    cout<<"\n\n";
    cout<<"Array despues de agregar dos elementos: ";

    //Imprimir arreglo luego de pushear los datos
    for(int i=0; i<7; i++){
        cout<<elementosEnteros[i]<<" ";
    }

    cout<<"\n\n";
    cout<<"Array despues de eliminar el tercer elemento: ";

    for(int i=0; i<7; i++){
        if(elementosEnteros[i]==30){elementosEnteros[i] = NULL;}
        else{cout<<elementosEnteros[i]<<" ";}
    }

    cout<<"\n";

    return 0;
}
