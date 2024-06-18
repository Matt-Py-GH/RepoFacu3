#include<iostream>
using namespace std;


int main(){

    //Lista enlazada unidireccional
    struct Nodos{
        int valorNodo;
        int *punteroSiguiente;
    };

    Nodos nodoCola, nodoDelMedio, nodoCabecera;

    nodoCola.valorNodo = 9;
    nodoCola.punteroSiguiente = NULL;

    nodoDelMedio.valorNodo = 7;
    nodoDelMedio.punteroSiguiente = &nodoCola.valorNodo;

    nodoCabecera.punteroSiguiente = &nodoDelMedio.valorNodo;
    nodoCabecera.valorNodo = 3;

    cout<<nodoCabecera.punteroSiguiente<<endl;

    //Listas enlazadas bidireccionales
    struct NodosB{
        int valorNodo;
        int *punteroSiguiente;
        int *punteroAnterior;
    };

    NodosB nodoColaB, nodoDosB, nodoUnoB nodoCabeceraB;

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
    nodoCabeceraB.punteroAnterior = NULL;

    cout<<nodoCabeceraB.punteroAnterior<<endl;

    return 0;
}
