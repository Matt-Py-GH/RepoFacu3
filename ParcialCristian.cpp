#include<iostream>
using namespace std;

/**

Se está planificando una fiesta de cumpleaños de 21, para la cual se conoce de una
lista de invitados quienes podrán ingresar al salón sin pagar entrada. En la puerta del
local la seguridad cuenta con dos listas distintas, una para mujeres y otra para hombres,
sólo se podrá ingresar si dicha persona se encuentra dentro de la lista y deberá quedar
marcada como que ingresó al lugar. En caso de otra persona querer hacer uso de un
nombre que ya ingresó, la persona deberá pagar para ingresar.

*/



int main(){

struct Personas{
char nombre[25];
int numeroDeLista;
int *punteroSiguiente;
bool masculinoFemenino;
bool entradaGratis;
};

Personas personaFinal, personaDos, PersonaUno, personaPrimera;

cout<<"Introduzca el nombre de la persona: ";
cin>>personaFinal.nombre;
cout<<"Introduzca si es masculino o femenino:   1/Masculino  0/Femenino: ";
cin>>personaFinal.masculinoFemenino;
cout<<"Tiene entrada gratis?   1/Si  0/No: ";
cin>>personaFinal.entradaGratis;
personaFinal.punteroSiguiente = NULL;
personaFinal.numeroDeLista = 4;

cout<<"Introduzca el nombre de la persona: ";
cin>>personaDos.nombre;
personaDos.numeroDeLista = 3;
cout<<"Introduzca si es masculino o femenino:   1/Masculino  0/Femenino: ";
cin>>personaDos.masculinoFemenino;
cout<<"Tiene entrada gratis?   1/Si  0/No: ";
cin>>personaDos.entradaGratis;
personaDos.punteroSiguiente = &personaDos.numeroDeLista;


  return 0;
}
