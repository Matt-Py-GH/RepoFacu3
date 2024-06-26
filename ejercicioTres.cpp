#include<iostream>
#include<cstring>
using namespace std;

/**
Se está planificando una fiesta de cumpleaños de 21, para la cual se conoce de una
lista de invitados quienes podrán ingresar al salón sin pagar entrada. En la puerta del
local la seguridad cuenta con dos listas distintas, una para mujeres y otra para hombres,
sólo se podrá ingresar si dicha persona se encuentra dentro de la lista y deberá quedar
marcada como que ingresó al lugar. En caso de otra persona querer hacer uso de un
nombre que ya ingresó, la persona deberá pagar para ingresar.
*/

struct ListaIngresados{
    char *nombreIngresados;
    ListaIngresados *siguiente;
};

struct NodoHombre{
    char *nombreHombre;
    NodoHombre *siguiente;
    bool ingresado;
};


struct NodoMujer{
    char *nombreMujer;
    NodoMujer *siguiente;
    bool ingresada;
};


NodoHombre *listaHombre = NULL;
NodoMujer *listaMujer = NULL;
ListaIngresados *lista = NULL;

bool ListaHombresVacia(){
    return listaHombre == nullptr;
}

bool ListaMujeresVacia(){
    return listaMujer == nullptr;
}

///---------------------------------------------------------------------///
void InsertarListaHombres(char nombreListaH[]){
    NodoHombre *nuevoNodo = new NodoHombre();
    nuevoNodo->nombreHombre = strdup(nombreListaH);
    NodoHombre *aux1 = listaHombre;
    NodoHombre *aux2 = nullptr;

    while(aux1 != NULL){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(listaHombre == aux1){
        listaHombre = nuevoNodo;
    } else {
        aux2->siguiente = nuevoNodo;
    }

    nuevoNodo->siguiente = aux1;
}
///---------------------------------------------------------------------///
void InsertarListaMujeres(char nombreListaM[]){
    NodoMujer *nuevoNodo = new NodoMujer();
    nuevoNodo->nombreMujer = strdup(nombreListaM);
    NodoMujer *aux1 = listaMujer;
    NodoMujer *aux2 = nullptr;

    while(aux1 != NULL){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(listaMujer == aux1){
        listaMujer = nuevoNodo;
    } else {
        aux2->siguiente = nuevoNodo;
    }

    nuevoNodo->siguiente = aux1;
}
///---------------------------------------------------------------------///
void InsertarListaIngresados(char nombreListaI[]){
    ListaIngresados *nuevoNodo = new ListaIngresados();
    nuevoNodo->nombreIngresados = strdup(nombreListaI);
    ListaIngresados *aux1 = lista;
    ListaIngresados *aux2 = nullptr;

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
///---------------------------------------------------------------------///
bool BuscarListaIngresados(char nombreBuscado[]){
    bool band = false;

    ListaIngresados *actual = new ListaIngresados();
    actual = lista;

    while(actual != NULL){
        if(strcmp(nombreBuscado, actual->nombreIngresados) == 0){
            band = true;
            break;
        }
        actual = actual->siguiente;

    }
    if(band == true){
        return true;
    }
    else{
        return false;
        }

}
///----------------------------------------------------------------------------------///
void BuscarListaHombre(char nombreBuscado[]){
    if(ListaHombresVacia()){cout<<"La lista esta vacia.\n";
    return;}
    bool band = false;

    NodoHombre *actual = new NodoHombre();
    actual = listaHombre;
    actual->ingresado = false;

    while(actual != NULL){
        if(strcmp(nombreBuscado, actual->nombreHombre) == 0){
            band = true;
            break;
        }
        actual = actual->siguiente;

    }
    if(band == true){
        if(!BuscarListaIngresados(nombreBuscado)){
        InsertarListaIngresados(actual->nombreHombre);
        cout<<"Usted "<<nombreBuscado<<", SI puede pasar a la fiesta\n";
        actual->ingresado = true;
        }
        else{
            cout<<"Usted hace uso de un nombre que ya fue usado, debera pagar...\n";
        }
    }
    else{
        cout<<"Usted "<<nombreBuscado<<", NO ha sido encontrado en la lista de hombres, debe pagar entrada\n";
    }



}
///----------------------------------------------------------------------------------///
void BuscarListaMujer(char nombreBuscado[]){
    if(ListaMujeresVacia()){cout<<"La lista esta vacia.\n";
    return;}
    bool band = false;

    NodoMujer *actual = new NodoMujer();
    actual = listaMujer;


    while(actual != NULL){
        if(strcmp(nombreBuscado, actual->nombreMujer) == 0){
            band = true;
            break;
        }
        actual = actual->siguiente;

    }
    if(band == true){
        if(!BuscarListaIngresados(nombreBuscado)){
        InsertarListaIngresados(actual->nombreMujer);
        cout<<"Usted "<<nombreBuscado<<", SI puede pasar a la fiesta\n";
        actual->ingresada = true;
        }
        else{
            cout<<"Usted hace uso de un nombre que ya fue usado, debera pagar...\n";
        }
    }
    else{
        cout<<"Usted "<<nombreBuscado<<", NO ha sido encontrada en la lista de mujeres, debe pagar entrada\n";
    }
}
///----------------------------------------------------------------------------------///
void MostrarIngresados(){
    ListaIngresados *actual = lista;

    while(actual != NULL){
        cout<<actual->nombreIngresados<<"\n";
        actual = actual->siguiente;
    }

}
///----------------------------------------------------------------------------------///
int main(){

char nombreCargado[25];
bool sexoCargado;
int opcion;


///Los nombres estan hardcodeados porque el enunciado especifica que las listas ya estan hechas

///Lista hombres
InsertarListaHombres("Mateo");
InsertarListaHombres("Miguel");
InsertarListaHombres("Juan");

///Lista mujeres
InsertarListaMujeres("Miranda");
InsertarListaMujeres("Martina");
InsertarListaMujeres("Candela");

while(opcion != 0){
cout<<"Seleccione 0 para salir y 1 para continuar\n";
cin>>opcion;
if(opcion == 1){

cout<<"Hombre o Mujer? 1/Hombre  0/Mujer:";
cin>>sexoCargado;

cout<<"Ingrese su nombre para ver si esta en la lista: ";
cin>>nombreCargado;

if(sexoCargado){BuscarListaHombre(nombreCargado);}
else{BuscarListaMujer(nombreCargado);}

}
else if(opcion == 0){
    cout<<"Saliendo del sistema...";
}

else if(opcion == 3){
    MostrarIngresados();
}

}


 return 0;
}


