///Delgado Ugarte Mateo Miguel
#include<iostream>
using namespace std;

void OrdenamientoBurbuja(int arregloDeEnteros[], int largoArreglo){

for(int i=0; i<largoArreglo; i++){
    for(int j=0; j<largoArreglo; j++){
        if(arregloDeEnteros[j]>arregloDeEnteros[j+1]){
            int auxiliar = arregloDeEnteros[j];
            arregloDeEnteros[j] = arregloDeEnteros[j+1];
            arregloDeEnteros[j+1] = auxiliar;
        }
    }
}

}

int BusquedaLineal(int arreglo[], int elementoABuscar){

for(int i=0; i<10; i++){
    if(elementoABuscar == arreglo[i]){
        return i;
    }
}

return -1;

}


int main(){

bool resultado;
int opcion;

while(opcion != 4){
    cout<<"1. Busqueda lineal  //  2.Ordenamiento burbuja  //  3. Matriz y arreglo  // 4.Salir\n";
    cout<<"Ingrese una opcion: ";
    cin>>opcion;


if(opcion == 1){

    int arreglo[10];
    int elemento;
    int resultado;

    cout<<"Llenado del array: \n";
    for(int i=0; i<10; i++){
        cout<<"Introduzca el elemento: ";
        cin>>arreglo[i];
    }

    cout<<"Introduzca un elemento a buscar: ";
    cin>>elemento;

    resultado = BusquedaLineal(arreglo, elemento);

    if(resultado != -1){
        cout<<"Elemento hallado en la posicion: "<<resultado<<endl;
    }
    else{
        cout<<"El elemento no fue hallado...\n";
    }


}///Fin opcion 1


else if(opcion == 2){
    int cantidadDeElementos;
    cout<<"Ingrese la cantidad de elementos que tiene el arreglo: ";
    cin>>cantidadDeElementos;

    int arregloDeEnteros[cantidadDeElementos];

    cout<<"Ingrese los elementos del arreglo:\n";

    for(int i=0; i<cantidadDeElementos; i++){
        cin>>arregloDeEnteros[i];

    }

    cout<<"Arreglo original: ";
    for(int i=0; i<cantidadDeElementos; i++){
        cout<<arregloDeEnteros[i]<<" ";
    }

    cout<<endl;

    OrdenamientoBurbuja(arregloDeEnteros, cantidadDeElementos);

    cout<<"Arreglo ordenado: ";
    for(int i=0; i<cantidadDeElementos; i++){
        cout<<arregloDeEnteros[i]<<" ";
}
cout<<endl;

} ///Fin opcion 2

else if(opcion==3){
    const int filas = 3;
    const int columnas = 3;

    int maxNumero;
    int encontrado;

    int matriz[filas][columnas];

    cout<<"Llenado de matriz:\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Introduzca el elemento "<<"("<<i<<","<<j<<")"<<" del arreglo: ";
            cin>>matriz[i][j];
        }
    }

    int arregloUnidimensional[9] = {matriz[0][0], matriz[0][1],matriz[0][2], matriz[1][0],matriz[1][1], matriz[1][2],matriz[2][0], matriz[2][1], matriz[2][2]};


    cout<<"Matriz\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"|  "<<matriz[i][j]<<" |";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"Arreglo desordenado: \n";
    for(int i=0; i<9; i++){
        cout<<arregloUnidimensional[i]<<" ";
    }

    OrdenamientoBurbuja(arregloUnidimensional, 9);
    cout<<"\nArreglo ordenado: \n";

    for(int i=0; i<9; i++){
        cout<<arregloUnidimensional[i]<<" ";
    }

    maxNumero = arregloUnidimensional[8];
    cout<<endl;

    encontrado = BusquedaLineal(arregloUnidimensional, maxNumero);

    if(encontrado != -1){
        cout<<"Numero mas alto es: "<<maxNumero;
    }
    cout<<endl<<endl;


}///Fin opcion 3

else if(opcion == 4){cout<<"Saliendo...";}

else if(opcion > 4 || opcion < 1){cout<<"Opcion ingresada incorrecta...\n";}

}


  return 0;
}
