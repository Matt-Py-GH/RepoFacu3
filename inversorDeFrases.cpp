#include<stdio.h>
#include<string.h>


int main(){

 //Variables
 int numeroDeCaracter = 0;
 int cantidadCaracteres = 0;
 int numeroInverso = 0;
 char caracter;
 char palabraOriginal[50];
 char variableAuxiliar[50];

//Escaneo de la palabra.
printf("Introduzca una frase o palabra: ");
gets(palabraOriginal);  //Uso del m�todo gets para obtener toda la l�nea escrita por el usuario.

//Tama�o de la palabra original y numero de caracter en el que se inicia la iteraci�n.
cantidadCaracteres = strlen(palabraOriginal);
numeroDeCaracter = cantidadCaracteres-1;

printf("\nLa palabra invertida es: ");

//Iteraci�n desde el final de la palabra al inicio para ir imprimiendo en orden inverso la palabra original.
for(numeroDeCaracter; numeroDeCaracter >= 0; numeroDeCaracter--){
     variableAuxiliar[numeroInverso] = palabraOriginal[numeroDeCaracter];
     printf("%c", variableAuxiliar[numeroInverso]);
     numeroInverso +=1;
 }

 printf("\n");

 return 0;
}
