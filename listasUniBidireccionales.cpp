#include<iostream>
using namespace std;

int main(){
    
    //Lista enlazada unidireccional
    struct Nodos{
        int valorNodo;
        int *punteroSiguiente;
    };
    
    Nodos nodoCola, nodoUno, nodoDos, nodoCabecera;
    
    nodoCola.valorNodo = 0;
    nodoCola.punteroSiguiente = NULL;
    
    nodoUno.valorNodo = 1;
    nodoUno.punteroSiguiente = &nodoCola.valorNodo;
    
    nodoDos.valorNodo = 2;
    nodoDos.punteroSiguiente = &nodoUno.valorNodo;
    
    nodoCabecera.valorNodo = 3;
    nodoCabecera.punteroSiguiente = &nodoDos.valorNodo;
    
    cout<<nodoCabecera.punteroSiguiente<<endl;
    
    //Listas enlazadas bidireccionales
    struct NodosB{
        int valorNodo;
        int *punteroSiguiente;
        int *punteroAnterior;
    };
    
    NodosB nodoColaB, nodoUnoB, nodoDosB, nodoCabeceraB;
    
    nodoColaB.valorNodo = 0;
    nodoColaB.punteroSiguiente = NULL;
    nodoColaB.punteroAnterior = &nodoUnoB.valorNodo;
    
    nodoUnoB.valorNodo = 1;
    nodoUnoB.punteroSiguiente = &nodoColaB.valorNodo;
    nodoUnoB.punteroAnterior = &nodoDosB.valorNodo;
    
    
    nodoDosB.valorNodo = 2;
    nodoDosB.punteroSiguiente = &nodoUnoB.valorNodo;
    nodoDosB.punteroAnterior = &nodoCabeceraB.valorNodo;
    
    nodoCabeceraB.valorNodo = 3;
    nodoCabeceraB.punteroSiguiente = &nodoDosB.valorNodo;
    nodoCabeceraB.punteroSiguiente = NULL;
    
    cout<<nodoColaB.punteroAnterior<<endl;
    
    return 0;
}