#include <stdio.h>
#include <math.h>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    const int FILAS = 3;
    const int COLUMNAS = 4;
    int matriz[FILAS][COLUMNAS];
    int filas;
    int columnas;
    int swich = true;
    int elemento;

    for (int i = 0; i < FILAS; i++) {

        for (int j = 0; j < COLUMNAS; j++) {

            matriz[i][j] = rand() % 100;

            if (matriz[i][j] < 10) printf("%d  ", matriz[i][j]);

            else printf("%d  ", matriz[i][j]);
        }

        printf("\n");

    }

    printf("\n");

    while (swich) {

        printf("Ingrese la fila del indice que se desea buscar: ");
        scanf("%d", &filas);

        filas--;

        printf("\nAhora ingrese la columna del indice que se desea buscar: ");
        scanf("%d", &columnas);

        columnas--;

        if (filas < 0 || columnas < 0) printf("\nHas ingresado un indice negativo, por favor ingrese indices validos.\n\n");

        else if (filas >= FILAS || columnas >= COLUMNAS) printf("\nHas ingresado un indice fuera del rango de la matriz, por favor ingrese indices validos.\n\n");

        else (swich = false);

    }

    elemento = matriz[filas][columnas];

    if (elemento % 2 == 0) printf("\nEl numero que se encuentra en la fila %d columna %d es el %d. Es un numero par", filas+1, columnas+1, elemento);

    else printf("\nEl numero que se encuentra en la fila %d columna %d es el %d. Es un numero impar", filas+1, columnas+1, elemento);

    return 0;
}
