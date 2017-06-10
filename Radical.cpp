#include "Radical.h"
#include "Real.h"

Radical::Radical(double coeficiente,double indice,double radicando){
	this->coeficiente=coeficiente;
	this->indice=indice;
	this->radicando=radicando;
}
Radical::Radical(){

}

void Radical::setCoeficiente(double coeficiente){
   this-> coeficiente=coeficiente;
}
double Radical::getCoeficiente(){
   return coeficiente;
}
void Radical::setIndice(double indice){
   this-> indice=indice;
}
double Radical::getIndice(){
   return indice;
}
void Radical::setRadicando(double radicando){
   this-> radicando=radicando;
}
double Radical::getRadicando(){
   return radicando;
}

string Radical::getTipo(){
	return Tipo;
}

void Radical::setTipo(string tipo){
	tipo="Radical";
	Tipo=tipo;
}
