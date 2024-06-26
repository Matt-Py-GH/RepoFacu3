#include<iostream>
#include<stdlib.h>
using namespace std;

void Compilador(char codigo[], int largoCadena){
    int acumulador = 0;
    int errores = 0;

    for(int i=0; i<largoCadena; i++){
        if(codigo[i] != '#' && codigo[i] != '*' && codigo[i] != '@' && codigo[i] != '&'){
            errores++;
        }
    }
    system("cls");

    if(errores>0){
        cout<<"Compilado con "<<errores<<" errores\n";
        cout<<"Su codigo no fue compilado con exito...";
    }
    else{
        system("cls");
        cout<<"\t=====Compilado con 0 errores=====\n";
        cout<<"Codigo: ";

        for(int i=0; i<largoCadena; i++){
            if(codigo[i] == '#'){
                acumulador++;
            }
            if(codigo[i] == '@'){
                acumulador--;
            }
            if(codigo[i] == '&'){
                cout<<acumulador;
            }
            if(codigo[i] == '*'){
                acumulador = acumulador * acumulador;
            }

        }
    }

    cout<<"\n";

}

int main(){

    int largoCadena;
    cout<<"Introduzca cuantos caracteres va a usar en su codigo: ";
    cin>>largoCadena;

    char codigoDeUsuario[largoCadena];
    cout<<"Introduzca su codigo: ";
    cin>>codigoDeUsuario;

    Compilador(codigoDeUsuario, largoCadena);


    return 0;
}

