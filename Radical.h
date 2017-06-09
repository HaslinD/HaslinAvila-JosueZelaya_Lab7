#include "Radical.h"
#include "Racional.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef RADICAL_H
#define RADICAL_H
class Radical : public Radical{
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
			Radical* p=static_cast<Radical*> (&real);
			string total;
			double suma, coeficiente, indice, radicando;
			if (radicando == rad->getRadicando() && indice == rad->getIndice())
			{
				suma = coeficiente + rad->getCoeficiente();
				total += suma;
				total += "( "+radicando
				total += " ^ "+"1"+"/"+indice;
				total += " )";

			} else if (radicando != rad->getRadicando() || indice != rad->getIndice()) {
				total += coeficiente;
				total += "( "+radicando;
				total += " ^ "+"1"+"/"+indice;
				total += " )";
			}
			
			return total;
		}
		string operator-(Real& real){
			Radical* p=static_cast<Radical*> (&real);
			double resta = 0;
			string total;
			if (radicando == rad->getRadicando() && indice == rad->getIndice())
			{
				resta = coeficiente - rad->getCoeficiente();
				total += suma;
				total += "( "+radicando
				total += " ^ "+"1"+"/"+indice;
				total += " )";
			} else if (radicando != rad->getRadicando() || indice != rad->getIndice()) {
				total += suma;
				total += "( "+radicando
				total += " ^ "+"1"+"/"+indice;
				total += " )";
			}
			return total;
		}
		string operator*(Real& real){
			Radical* p = static_cast<Radical*> (&real);
			double multiR, multiI, multiC;
			multiR = radicando * p->getRadicando();
			if (indice == rad->getIndice())
			{
				multiI = indice;
			} else if (indice != rad->getIndice()) {
				multiI = indice * p->getIndice();
			}
			multiC = coeficiente * p->getCoeficiente();

			total += suma;
			total += "( "+radicando
			total += " ^ "+"1"+"/"+indice;
			total += " )";
			
		}
		string operator/(Real&){

		}

};
#endif
