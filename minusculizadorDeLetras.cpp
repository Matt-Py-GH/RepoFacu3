#include<iostream>
#include <cctype>
using namespace std;

void Minusculas(char palabra[], int largoPalabra){

for(int i=0; i<largoPalabra; i++){
    palabra[i] = tolower(palabra[i]);
}

cout<<palabra;


}

void Mayusculas(char palabra[], int largoPalabra){

for(int i=0; i<largoPalabra; i++){
    palabra[i] = toupper(palabra[i]);
}

cout<<palabra;


}


int main(){

char palabra[50];

int largoPalabra = end(palabra) - begin(palabra);

cout<<"Introfuzca la frase en mayusculas: ";
Minusculas(gets(palabra), largoPalabra);
cout<<endl;

cout<<"Introduzca la frase en minusculas: ";
Mayusculas(gets(palabra), largoPalabra);
cout<<endl;


}
