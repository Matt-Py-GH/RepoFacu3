#include<iostream>
using namespace std;

struct Nodo{
    char *nombreLista;
    Nodo *siguiente;
};

bool ListaVacia() {
 return lista == nullptr;
}

void MostrarLista(Nodo *lista){
    if(ListaVacia){
        cout<<"La lista no contiene nada.\n";
        return;
    }
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->nombreLista;
        actual = actual->siguiente;
    }
}


void InsertarLista(Nodo *&lista, char nombreLista[]){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->nombreLista = nombreLista;
    Nodo *aux1 = lista;
    Nodo *aux2;

    while(aux1 != NULL && aux1->nombreLista < nombreLista){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevoNodo;
    }
    else{
        aux2->siguiente = nuevoNodo;
    }

    nuevoNodo->siguiente = aux1;
}

int main(){

Nodo *lista = NULL;

char nombreLista[25];
int cantidadNombres;
char confirmacion;


cout<<"Introduzca la cantidad de personas que desea en la lista: ";
cin>>cantidadNombres;


for(int i=0; i<cantidadNombres; i++){
    cout<<"Inserte un nombre a la lista: ";
    cin>>nombreLista;
    InsertarLista(lista, nombreLista);
}

MostrarLista(lista);

  return 0;

}


