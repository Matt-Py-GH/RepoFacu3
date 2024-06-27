#include <iostream>
#include<cstring>
using namespace std;

int main() {
    char palabra[50];
    gets(palabra);
    int largoCadena = strlen(palabra);

    //Array para contar la frecuencia de cada letra (considerando sólo letras minúsculas)
    int frecuenciaDeLetra[26] = {0};

    //Contar la frecuencia de cada letra
    for (int i = 0; i < largoCadena; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            frecuenciaDeLetra[palabra[i] - 'a']++;
        }
    }

    //Determinar la letra con la mayor frecuencia
    char letraMasFrecuente = NULL;
    int maximaFrecuencia = 0;
    for (int i = 0; i < 26; i++) {
        if (frecuenciaDeLetra[i] > maximaFrecuencia) {
            maximaFrecuencia = frecuenciaDeLetra[i];
            letraMasFrecuente = 'a' + i;
        }
    }

    //Imprimir el resultado
    if (letraMasFrecuente != NULL) {
        cout << "La letra que mas se repite es: " << letraMasFrecuente
             << " con una frecuencia de: " << maximaFrecuencia << endl;
    } else {
        cout << "No se encontraron letras en la cadena." << endl;
    }

    return 0;
}

