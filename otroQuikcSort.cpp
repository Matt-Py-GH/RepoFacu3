#include <iostream>
#include <vector>
using namespace std;
///->cuatro funciones

///-->Funcion para intercambiar elementos------

void swap(int& a, int& b){
  int temp=a;
  a=b;
  b=temp;
}

///--->Funcion para encontrar el pivote--------

int particion(vector<int>arr, int elemChico, int elemGrande){
  int pivote= arr[elemGrande]; ///-->se elige el ultimo elemento del pivote
  int i= (elemChico - 1); ///--> es el indice del elemento mas chico

  for(int j=elemChico; j<=elemGrande-1;j++){///--> va a iterar del elemento mas chico al elemento mas grande
     if (arr[j] < pivote){
        i++;
        swap(arr[i],arr[j]);
     }
  }
  swap (arr[i+1], arr[elemGrande]);
return (i+1);
}
///-->Funcion principal del QuickSort---------

void quicksort(vector<int>& arr, int elemChico, int elemGrande){
   if (elemChico< elemGrande){
       int pivoteDelSort= particion(arr, elemChico, elemGrande);
       quicksort(arr, elemChico, pivoteDelSort - 1);
       quicksort(arr, pivoteDelSort + 1, elemGrande);
   }
}
void imprimirArr(vector<int>& arr){
    for (int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl;
}

int main(){
  vector<int>arr={33,16,55,1,10,22,81,7,4,3};
  cout <<"Array desordenado: ";
  imprimirArr(arr);
  quicksort(arr, 0, arr.size() - 1);
  cout <<"Array ordenado: ";
  imprimirArr(arr);

 return 0;
}
