#include "Racional.h"

using namespace std;

Racional :: Racional(double denominador, double numerador) {
	this -> denominador = denominador;
	this -> numerador = numerador;
}

Racional :: Racional() {

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

void Racional::tostring(string& out, double value){
    ostringstream ss;
    ss << value;
    out = ss.str();

}
