#include<cstring>
#include<iostream>
using namespace std;

int main(){

char palabraDelUsuario[50];
int cantidadCaracteres;

cout<<"Introduzca una palabra: ";
gets(palabraDelUsuario);

cantidadCaracteres = strlen(palabraDelUsuario);

cout<<"La cantidad de caracteres de la palabra introducida es: "<<cantidadCaracteres<<endl;


  return 0;
}
