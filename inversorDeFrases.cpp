#include<cstring>
#include<iostream>
using namespace std;


int main(){


 int numeroDeCaracter = 0;
 int cantidadCaracteres = 0;
 int numeroInverso = 0;
 char palabraOriginal[50];
 char variableAuxiliar[50];

cout<<"Introduzca una frase o palabra: ";
gets(palabraOriginal);


cantidadCaracteres = strlen(palabraOriginal);
numeroDeCaracter = cantidadCaracteres-1;

cout<<"\nLa palabra invertida es: );";

for(numeroDeCaracter; numeroDeCaracter >= 0; numeroDeCaracter--){
     variableAuxiliar[numeroInverso] = palabraOriginal[numeroDeCaracter];
     cout<<variableAuxiliar[numeroInverso];
     numeroInverso +=1;
 }

 cout<<"\n";

 return 0;
}
