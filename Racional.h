#include "Real.h"

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
		void tostring(string&, double);

		int operator+(Real& real){
			Racional* p=static_cast<Racional*> (&real);
			double total;
			if (denominador== p->getDenominador()){
				total=numerador+p->getNumerador();
				tostring();

			}
		}

		int operator-(Real& real){

		}

		int operator*(Real& real){

		}

		int operator/(Real& real){

		}

};

#endif
