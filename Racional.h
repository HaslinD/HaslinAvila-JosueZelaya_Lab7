#include "Real.h"
#include <string>

#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional : public Real{
	private:
		double denominador;
		double numerador;

	public:
		Racional();
		Racional(double, double);
		double getDenominador();
		void setDenominador(double);
		double getNumerador();
		void setNumerador(double);

		string operator+(Real& real){
			Racional* p=static_cast<Racional*> (&real);
			if (numerador== p->getNumerador()){

			}
		}

		string operator-(Real& real){

		}

		string operator*(Real& real){

		}

		string operator/(Real& real){

		}

};

#endif
