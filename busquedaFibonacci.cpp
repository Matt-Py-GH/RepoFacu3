#include<iostream>
using namespace std;

/**
Solicite al usuario ingresar 10 números cualquiera, luego ingrese un valor y haga el
cálculo de la serie de fibonacci, para finalizar verifique por el método de búsqueda más
óptimo que conozca encontrar si dicha ocurrencia se encuentra dentro de los valores
del array
*/

bool BusquedaSecuencial(int arreglo[], int elemento, int largoArreglo)
{
    for(int i=0; i<largoArreglo; i++)
    {
        if(elemento == arreglo[i])
        {
            return true;
        }
    }

    return false;
}

int fibo(int limite){

if(limite == 0){return 0;}
else if(limite == 1){return 1;}
else{return fibo(limite-1)+fibo(limite-2);}

}

int main(){

int arregloDeNumeros[10];
int valor;
int valorAbuscar;

cout<<"Introduzca los valores del arreglo:";
for(int i=0; i<10; i++){
    cin>>arregloDeNumeros[i];
}

cout<<"\nIntroduzca el valor: ";
cin>>valor;

valorAbuscar = fibo(valor);

bool encontrado = BusquedaSecuencial(arregloDeNumeros, valorAbuscar, 10);

if(encontrado){
    cout<<"Encontrado...";
}
else{
    cout<<"No encontrado...";
}

}
