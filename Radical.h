#include "Real.h"
#include "Racional.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef RADICAL_H
#define RADICAL_H
class Radical : public Real{
	protected:
		double coeficiente;
		double indice;
		double radicando;
	public:
		Radical(double,double,double);
		Radical();
		double getCoeficiente();
		void setCoeficiente(double);

		double getIndice();
		void setIndice(double);

		double getRadicando();
		void setRadicando(double);

		string operator+(Real& real){
			Radical* rad = static_cast<Radical*>(&real);
			string total;
			double suma, coeficiente, indice, radicando;
			if (radicando == rad->getRadicando() && indice == rad->getIndice())
			{
				suma = coeficiente + rad->getCoeficiente();
				total += suma;
				total += "("+radicando
				total += "^"+"1"+"/"+indice;
			} else if (radicando != rad->getRadicando() && indice != rad->getIndice()) {
				/* code */
			}
			
			return total;
		}
		string operator-(Real& real){
			Radical* rad = static_cast<Radical*>(&real);
			double resta = 0;
			if (radicando == rad->getRadicando() && indice == rad->getIndice())
			{
				resta = coeficiente - rad->getCoeficiente();
			}

		}
		string operator*(Real&){

		}
		string operator/(Real&){

		}

};
#endif
