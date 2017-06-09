#include "Real.h"

#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional {
	private:
		int denominador;
		int numerador;

	public:
		Racional();
		Racional(int, int);
		int getDenominador();
		void setDenominador(int);
		int getNumerador();
		void setNumerador(int);

<<<<<<< HEAD
		int operator+(Real&){

=======

		int operator+(Real*){
>>>>>>> e5c98876a12c16865af5615c05ec039c7ee8c8f0

		}
		int operator-(Real&){

		}
		int operator*(Real&){

		}
		int operator/(Real&){

		}

};

#endif