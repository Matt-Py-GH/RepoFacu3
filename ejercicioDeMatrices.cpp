#include <iostream>
using namespace std;

int main() {
    const int largoArrays = 10;
    int arrayUno[largoArrays];
    int arrayDos[largoArrays];
    int arrayResultado[largoArrays];

    //Ingresar valores para el primer array
    cout << "Ingrese 10 valores para el primer array:" << endl;
    for(int i = 0; i < largoArrays; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> arrayUno[i];
    }

    //Ingresar valores para el segundo array
    cout << "Ingrese 10 valores para el segundo array:" << endl;
    for(int i = 0; i < largoArrays; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> arrayDos[i];
    }

    cout<<"Matriz original"<<endl;
    for(int i = 0; i<largoArrays; i++){
        cout<<arrayUno[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0; i<largoArrays; i++){
        cout<<arrayDos[i]<<" ";
    }
    cout<<"\n\n";

    //Calcular la suma de los arrays y almacenarla en arrayResultado
    for(int i = 0; i < largoArrays; i++) {
        arrayResultado[i] = arrayUno[i] + arrayDos[i];
    }

    //Mostrar el resultado
    cout << "El array de la suma de los elementos es:" << endl;
    for(int i = 0; i < largoArrays; i++) {
        cout<<arrayResultado[i]<<" ";
    }

    return 0;
}

