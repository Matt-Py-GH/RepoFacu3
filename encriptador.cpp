#include<iostream>
#include<cstring>
using namespace std;


void Desencriptador(char cadenaDeTexto[], int largoCadena){
    cout<<"Texto desencriptado: ";

    for(int i=0; i<largoCadena; i++){
        if(cadenaDeTexto[i] == '%'){
            cadenaDeTexto[i] = 'a';
            cout<<cadenaDeTexto[i];
        }

        else if(cadenaDeTexto[i] == '?'){
            cadenaDeTexto[i] = 'e';
            cout<<cadenaDeTexto[i];
        }

        else if(cadenaDeTexto[i] == '|'){
            cadenaDeTexto[i] = 'i';
            cout<<cadenaDeTexto[i];
        }

        else if(cadenaDeTexto[i] == '['){
            cadenaDeTexto[i] = 'o';
            cout<<cadenaDeTexto[i];
        }

        else if(cadenaDeTexto[i] == '-'){
            cadenaDeTexto[i] = 'u';
            cout<<cadenaDeTexto[i];
        }
        else{cout<<cadenaDeTexto[i];}
    }
    cout<<endl;


    }


void Encriptador(char cadenaDeTexto[], int largoCadena){

cout<<"Texto encriptado: ";

for(int i=0; i<largoCadena; i++){
    if(cadenaDeTexto[i] == 'a'){
        cadenaDeTexto[i] = '%';
        cout<<cadenaDeTexto[i];
    }

    else if(cadenaDeTexto[i] == 'e'){
        cadenaDeTexto[i] = '?';
        cout<<cadenaDeTexto[i];
    }

    else if(cadenaDeTexto[i] == 'i'){
        cadenaDeTexto[i] = '|';
        cout<<cadenaDeTexto[i];
    }

    else if(cadenaDeTexto[i] == 'o'){
        cadenaDeTexto[i] = '[';
        cout<<cadenaDeTexto[i];
    }

    else if(cadenaDeTexto[i] == 'u'){
        cadenaDeTexto[i] = '-';
        cout<<cadenaDeTexto[i];
    }
    else{cout<<cadenaDeTexto[i];}
}
cout<<endl;

}


int main(){

char cadenaDeTexto[250];

cout<<"Inserta el mensaje a encriptar: ";
gets(cadenaDeTexto);
int largoCadena = strlen(cadenaDeTexto);
Encriptador(cadenaDeTexto, largoCadena);
cout<<endl;

cout<<"Inserta el mensaje a desencriptar: ";
gets(cadenaDeTexto);
largoCadena = strlen(cadenaDeTexto);
Desencriptador(cadenaDeTexto, largoCadena);
cout<<endl;


 return 0;
}

