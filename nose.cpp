#include<stdio.h>
#include<string.h>


int main(){

 //Variables
 int numeroDeCaracter = 0;
 int cantidadCaracteres = 0;
 int numeroInverso = 0;
 char caracter;
 char palabraOriginal[50];
 char stemp[50];

//Escaneo de la palabra.
printf("Introduzca una frase o palabra: ");
gets(palabraOriginal);  //Uso del método gets para obtener toda la línea escrita por el usuario.

//Tamaño de la palabra original y numero de caracter en el que se inicia la iteración.
cantidadCaracteres = strlen(palabraOriginal);
numeroDeCaracter = cantidadCaracteres-1;

printf("\nLa palabra invertida es: ");

//Iteración desde el final de la palabra al inicio para ir imprimiendo en orden inverso la palabra original.
for(numeroDeCaracter; numeroDeCaracter >= 0; numeroDeCaracter--){
     stemp[numeroInverso] = palabraOriginal[numeroDeCaracter];
     printf("%c", stemp[numeroInverso]);
     numeroInverso +=1;
 }

 printf("\n");

 return 0;
}
