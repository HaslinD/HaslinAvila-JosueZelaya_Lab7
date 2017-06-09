#include "Real.h"

#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional {
	private:
		double denominador;
		double numerador;

	public:
		Racional();
		Racional(double, double);
		double getDenominador();
		void setDenominador(int);
		double getNumerador();
		void setNumerador(int);

		int operator+(Real& real){
			Racional* p=dynamic_cast<Real*> (real);
			if (numerador== p->getNumerador()){

			}
		}

		int operator-(Real&){

		}

		int operator*(Real&){

		}

		int operator/(Real&){

		}

};

#endif
