#include <iostream>
using namespace std;


bool malCargado(int vectorArreglo[], int numeroDeElementos){

for(int i = 0; i<numeroDeElementos; i++){
    int aux = vectorArreglo[i];
    if(aux == vectorArreglo[i+1]){return true;}

}
return false;

}

void QuickSort(int vectorArreglo[], int izquierdaDelArreglo, int derechaDelArreglo){
  int i=izquierdaDelArreglo;
  int j=derechaDelArreglo;
  int pivot=vectorArreglo[(izquierdaDelArreglo + derechaDelArreglo)/2];

  while (i<=j){
    while(vectorArreglo[i]<pivot && i<derechaDelArreglo){i++;}
    while(pivot < vectorArreglo[j] && j> izquierdaDelArreglo){j--;}
    if(i<=j){
        int k=vectorArreglo[i];
        vectorArreglo[i]=vectorArreglo[j];
        vectorArreglo[j]=k;
        i++;
        }
    }
    if (izquierdaDelArreglo < j)QuickSort(vectorArreglo,izquierdaDelArreglo,j);
    if(i<derechaDelArreglo)QuickSort(vectorArreglo,i,derechaDelArreglo);
  }

int main (){
   int numeroDeElementos;
   cout<<"Ingrese la cantidad de elementos del arreglo: ";
   cin>>numeroDeElementos;

   int vectorArreglo[numeroDeElementos];

   cout<<"Ingrese los elementos:\n";

   for(int i=0;i<numeroDeElementos;i++){
    cin>>vectorArreglo[i];
    }

    if(malCargado(vectorArreglo, numeroDeElementos)){
        cout<<"Vuelva a introducir los valores, alguno de ellos fue cargado repetido\n";
    }
    else{

   cout<<"Array original: ";

   for(int i=0;i<numeroDeElementos;i++){
    cout<<vectorArreglo[i]<<" ";
   }

   cout<<"\n\n";

   QuickSort(vectorArreglo,0,numeroDeElementos-1);

   cout<<"Array ordenado: ";

   for(int i=0;i<numeroDeElementos;i++){
    cout<<vectorArreglo[i]<<" ";
   }

   cout<<"\n\n";}

   return 0;
}
