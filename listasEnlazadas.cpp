#include<iostream>
#include<cstring>
using namespace std;


struct Nodo{
    char *nombreLista;
    Nodo *siguiente;
};
///----------------------------------------------------------------------------------///
Nodo *lista = NULL;
///----------------------------------------------------------------------------------///
bool ListaVacia() {
    return lista == nullptr;
}
///----------------------------------------------------------------------------------///
void EliminarDeLista(char nombreAEliminar[]){
    if(lista != NULL){
        Nodo *auxiliarBorrar;
        Nodo *anterior = NULL;
        auxiliarBorrar = lista;

        while(auxiliarBorrar != NULL && strcmp(auxiliarBorrar->nombreLista, nombreAEliminar) != 0){
            anterior = auxiliarBorrar;
            auxiliarBorrar = auxiliarBorrar->siguiente;
        }
        if(auxiliarBorrar == NULL){
            cout<<"No ha sido encontrado el nombre...\n";
        }

        else if(anterior == NULL){
            lista = lista->siguiente;
            delete auxiliarBorrar;
        }
        else{
            anterior->siguiente = auxiliarBorrar->siguiente;
            delete auxiliarBorrar;
        }


    }

    if(ListaVacia()){cout<<"Lista vacia.\n\a";
    return;
    }

}
///----------------------------------------------------------------------------------///
void BuscarLista(char nombreBuscado[]){
    if(ListaVacia()){cout<<"La lista esta vacia.\n";
    return;}
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;


    while(actual != NULL){
        if(strcmp(nombreBuscado, actual->nombreLista) == 0){
            band = true;
            break;
        }
        actual = actual->siguiente;

    }
    if(band == true){
        cout<<"Nombre "<<nombreBuscado<<" SI ha sido encontrado en la lista\n";
    }
    else{
        cout<<"Nombre "<<nombreBuscado<<" NO ha sido encontrado en la lista\n";
    }


}
///----------------------------------------------------------------------------------///
void MostrarLista(){
    if (ListaVacia()) {
        printf("La lista esta vacia.\n");
        return;
    }
    Nodo *actual = lista;

    while(actual != NULL){
        cout<<actual->nombreLista<<"\n";
        actual = actual->siguiente;
    }

}
///----------------------------------------------------------------------------------///
void InsertarLista(char nombreLista[]){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->nombreLista = strdup(nombreLista);
    Nodo *aux1 = lista;
    Nodo *aux2 = nullptr;

    while(aux1 != NULL){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevoNodo;
    } else {
        aux2->siguiente = nuevoNodo;
    }

    nuevoNodo->siguiente = aux1;
}
///----------------------------------------------------------------------------------///
int main(){
    char nombreLista[25];
    int cantidadNombres;
    char nombreBuscado[25];
    char nombreAEliminar[25];
    int opcion;

    while(opcion != 5){
        cout<<"\t.:MENU:.\n";
        cout<<"1.Ingresar nombres a la lista\n2.Eliminar nombres de la lista\n3.Mostrar la lista\n4.Buscar elemento en la lista\n5.Salir";
        cout<<"\n\nIngrese una opcion:";
        cin>>opcion;

        switch(opcion){
        case 1:
            cout<<"Introduzca la cantidad de personas que desea en la lista: ";
            cin>>cantidadNombres;

            for(int i=0; i<cantidadNombres; i++){
                cout<<"Inserte un nombre a la lista: ";
                cin>>nombreLista;
                InsertarLista(nombreLista);
            }
        break;

        case 2:
            cout<<"Ingrese el nombre que desea eliminar de la lista: ";
            cin>>nombreAEliminar;
            EliminarDeLista(nombreAEliminar);
        break;

        case 3:
            cout<<"\tLista completa:\n";
            MostrarLista();
        break;

        case 4:
            cout<<"\nInserte un nombre para buscar en la lista: ";
            cin>>nombreBuscado;
            BuscarLista(nombreBuscado);
        break;

        case 5:
            cout<<"Saliendo del sistema...\n";
        break;

        default:
            cout<<"Opcion incorrecta, ingrese nuevamente...\n\n";
        }

    }

    return 0;
}



