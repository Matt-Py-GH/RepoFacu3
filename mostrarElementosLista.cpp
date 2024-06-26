#include<iostream>
using namespace std;

struct Nodo{
    char *nombreLista;
    Nodo *siguiente;
};

void MostrarLista() {
 Nodo *temporal = lista;
 while (temporal != nullptr) {
 printf("%s\n", temporal->nombreInsertado);
 temporal = temporal->punteroSiguiente;
 }
}


int main(){

Nodo *lista = nullptr;




  return 0;
}
