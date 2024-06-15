#include<iostream>
using namespace std;

int sumaDeEnteros(int numeroUno, int numeroDos){

int resultado = numeroUno + numeroDos;

return resultado;

}

int main(){

int NUMBERONE;
int NUMBERTWO;

cin>>NUMBERONE>>NUMBERTWO;

int valor = sumaDeEnteros(NUMBERTWO, NUMBERONE);

cout<<valor;


  return 0;
}
