#include <iostream>
using namespace std;


int main() {
    int filas, columnas, filaBusq, columnaBusq;
    bool booleano = true;
    cout<<"Inserte las filas de la matriz: ";
    cin >> filas;
    cout<<"Inserte las columnas de la matriz: ";
    cin >> columnas;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout<<"| "<<matriz[i][j]<<" |";
        }cout<<endl;
    }

    while(booleano){
    cout<<"Inserte la fila en la que desea buscar: ";
    cin>>filaBusq;
    cout<<"Inserte la columna en la que desea buscar: ";
    cin>>columnaBusq;
    cout<<endl<<endl;

    if(filaBusq >= filas && columnaBusq >= columnas){cout<<"Ha introducido un dato erroneamente...\n";}
    else{booleano = false;}
    }
    int elemento = matriz[filaBusq][columnaBusq];
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == elemento){contador = 1;}
        }
    }
    if(contador > 0){cout<<"El elemento fue encontrado y es: "<<matriz[filaBusq][columnaBusq];}
    else{
    cout<<"\nEl elemento no fue encotnrado...\n";
    }

    return 0;
}

