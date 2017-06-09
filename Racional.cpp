#include "Racional.h"

using namespace std;

Racional :: Racional(int denominador, int numerador) {
	this -> denominador = denominador;
	this -> numerador = numerador;
}

Racional :: Racional() {
	
}

int Racional :: getDenominador(){
	return denominador;
}

void Racional :: setDenominador(int ndenominador){
	denominador = ndenominador;
}

int Racional :: getNumerador(){
	return numerador;
}

void Racional :: setNumerador(int nnumerador){
	numerador = nnumerador;
}

