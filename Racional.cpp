#include "Racional.h"
#include <sstream>
#include <string>

using namespace std;

Racional :: Racional(double denominador, double numerador) {
	this -> denominador = denominador;
	this -> numerador = numerador;
}

Racional :: Racional() {

}

string Racional::getTipo(){
	return Tipo;
}

void Racional::setTipo(string tipo){
	tipo="Racional";
	Tipo=tipo;
}

double Racional :: getDenominador() {
	return denominador;
}

void Racional :: setDenominador(double ndenominador) {
	denominador = ndenominador;
}

double Racional :: getNumerador() {
	return numerador;
}

void Racional :: setNumerador(double nnumerador) {
	numerador = nnumerador;
}

string Racional::tostring(){
    stringstream ss;
    ss << numerador<< " / "<<denominador;
    return ss.str();

}

string operator+(Real& real){
	double denominador;
	double numerador;
	this -> denominador = denominador;
	this -> numerador = numerador;
	//Racional

	Racional* p=static_cast<Racional*> (&real);
	string total;
	double num, den, num2,num3;
	if (denominador== p->getDenominador()){
		num=numerador+p->getNumerador();
		total+=num;
		total+=" / ";
		total+=denominador;

		return total;
	}else{
		num=((numerador*p->getDenominador())+(denominador*p->getNumerador()));
		den=(denominador*p->getDenominador());
		total+= num;
		total+= " / ";
		total+= den;

		return total;
	}

	//Radical
	Radical* radi=static_cast<Radical*> (&real);
	num=numerador;
	total+=num;
	total+= " + ";
	num2=(denominador*radi->getCoeficiente());
	total+= num2;
	total+=radi->getRadicando();
	total+= " ^ ";
	total+= radi->getIndice();
	total+= " / ";
	total+= denominador;

	//return total;


}

string operator-(Real& real){
	double denominador;
	double numerador;
	this -> denominador = denominador;
	this -> numerador = numerador;

	//Resta de FRacciones
	Racional* p=static_cast<Racional*> (&real);
	string total;
	double num, den, num2;
	if (denominador== p->getDenominador()){
		num=numerador-p->getNumerador();
		total+=num;
		total+=" / ";
		total+=denominador;

		return total;
	}else{
		num=((numerador*p->getDenominador())-(denominador*p->getNumerador()));
		den=(denominador*p->getDenominador());
		total+= num;
		total+= " / ";
		total+= den;

		return total;
	}

	//Radical

	Radical* radi=static_cast<Radical*> (&real);
	num=numerador;
	total+=num;
	total+= " - ";
	num2=(denominador*radi->getCoeficiente());
	total+= num2;
	total+=radi->getRadicando();
	total+= " ^ ";
	total+= radi->getIndice();
	total+= " / ";
	total+= denominador;

	return total;

}

string operator*(Real& real){
	double denominador;
	double numerador;
	this -> denominador = denominador;
	this -> numerador = numerador;

	//multiplicacion racionales
	Racional* p=static_cast<Racional*> (&real);
	string total;
	double num, den;
	num=(numerador*p->getNumerador());
	den=(denominador*p->getDenominador());
	total+=num;
	total+= " / ";
	total+= den;

	return total;

	//radicales
	//Radical* radi=static_cast<Radical*> (&real);

}

string operator/(Real& real){
	double denominador;
	double numerador;
	this -> denominador = denominador;
	this -> numerador = numerador;

	Racional* p=static_cast<Racional*> (&real);
	string total;
	double num, den;
	num=(numerador*p->getDenominador());
	den=(denominador*p->getNumerador());

	total+=num;
	total+= " / ";
	total+= den;

	return total;
}