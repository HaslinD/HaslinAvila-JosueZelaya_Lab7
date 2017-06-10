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
