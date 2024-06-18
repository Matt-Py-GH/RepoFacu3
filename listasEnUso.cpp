#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


//--------------------------------------------------//
struct Nodo {
 char *nombreInsertado;
 Nodo *punteroSiguiente;
};
//--------------------------------------------------//
Nodo *Lista = nullptr;
bool ListaVacia();
char *SacaLista();
void MuestraListado();
void InsertarLista(const char *Nom);
//--------------------------------------------------//
bool ListaVacia() {
 return Lista == nullptr;
}
//--------------------------------------------------//
char *SacaLista() {
 if (ListaVacia()) {
 printf("La lista está vacía.\n");
 return nullptr;
 }
 Nodo *temp = Lista;
 char *nombre = strdup(Lista->nombreInsertado); // Copiamos el nombre
 Lista = Lista->punteroSiguiente;
 free(temp->nombreInsertado); // Liberar la memoria del nombre del nodo
 free(temp); // Liberar la memoria del nodo
 return nombre;
}
//--------------------------------------------------//
void MuestraListado() {
 if (ListaVacia()) {
 printf("La lista está vacía.\n");
 return;
 }
 Nodo *temp = Lista;
 while (temp != nullptr) {
 printf("%s\n", temp->nombreInsertado);
 temp = temp->punteroSiguiente;
 }
}
//--------------------------------------------------//
void InsertarLista(const char *Nom) {
 Nodo *t = new Nodo;
 if (!t) {
 printf("No se pudo asignar memoria.\n");
 return;
 }
 t->nombreInsertado = strdup(Nom); // Asignamos el nombre
 t->punteroSiguiente = nullptr;
 if (Lista == nullptr) {
 Lista = t;
 } else {
 Nodo *q = Lista;
 while (q->punteroSiguiente != nullptr) {
 q = q->punteroSiguiente;
 }
 q->punteroSiguiente = t;
 }
}
//--------------------------------------------------//
int main() {
 system("cls");

 char nombreInsertado[50];
 int cantidadNombres;


 printf("Inserte la cantidad de nombres que desea en la lista: ");cin>>cantidadNombres;

 // Ejemplo de inserción de nombres
 for(int i=0; i<cantidadNombres; i++){
    cout<<"Inserte un nombre en la lista: ";
    cin>>nombreInsertado;
    InsertarLista(nombreInsertado);
    }

 MuestraListado();

 // Ejemplo de extracción de un elemento
 char *nombre = SacaLista();
 if (nombre) {
 printf("Elemento extraido: %s\n", nombre);
 free(nombre);
 }

 MuestraListado();

 return 0;

}
