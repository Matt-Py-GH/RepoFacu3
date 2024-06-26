#include<iostream>
using namespace std;


bool AsientosDisponibles(int asientos[], int asientoDeseado){
    for(int i=0; i<7; i++){
        if(asientoDeseado == asientos[i]){
            return true;
        }
    }


return false;

}


int main(){

    int asientoDeseado;
    bool asientoDisponible;
    int asientos[7] = {65, 12, 9, 4, 3, 6, 7};


    cout<<"Asientos disponibles: ";
    for(int i=0; i<7; i++){
        cout<<asientos[i]<<" ";
    }
    cout<<endl;

    cout<<"Ingrese cual es el asiento que desea: ";
    cin>>asientoDeseado;

    asientoDisponible = AsientosDisponibles(asientos, asientoDeseado);

    if(asientoDisponible == true){
        cout<<"El asiento "<<asientoDeseado<<" se encuentra disponible, puede usarlo!\n";
    }
    else{
        cout<<"El asiento que selecciono no se encuentra disponible, lo lamentamos...\n";
    }

    return 0;
}
