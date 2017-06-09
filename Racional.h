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

		int operator+(Real*){

		}
		int operator-(Real*){

		}
		int operator*(Real*){

		}
		int operator/(Real*){
			
		}

};

#endif
