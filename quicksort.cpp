#include <iostream>
using namespace std;

void QuickSort(int vectorArreglo[], int izquierdaDelArreglo, int derechaDelArreglo){
  int i=izquierdaDelArreglo;
  int j=derechaDelArreglo;
  int t=vectorArreglo[(izquierdaDelArreglo + derechaDelArreglo)/2];

  while (i<=j){
    while(vectorArreglo[i]<t && i<derechaDelArreglo){i++;}
    while(t < vectorArreglo[j] && j> izquierdaDelArreglo){j--;}
    if(i<=j){
        int k=vectorArreglo[i];
        vectorArreglo[i]=vectorArreglo[j];
        vectorArreglo[j]=k;
        i++;
        }
    }
    if (izquierdaDelArreglo < j)QuickSort(vectorArreglo,izquierdaDelArreglo,j);
    if(i<derechaDelArreglo) QuickSort(vectorArreglo,i,derechaDelArreglo);
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

   cout<<"\n\n";

   return 0;
}
