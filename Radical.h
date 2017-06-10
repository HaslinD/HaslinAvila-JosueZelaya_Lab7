#include "Real.h"
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
			Radical* p=static_cast<Radical*> (&real);
			string total;
			double suma, coeficiente, indice, radicando;
			if (radicando == p->getRadicando() && indice == p->getIndice())
			{
				suma = coeficiente + p->getCoeficiente();
				total += suma;
				total += "( ";
				total += radicando;
				total += " ^ ";
				total += "1";
				total += "/";
				total += indice;
				total += " )";
				return total;

			} else if (radicando != p->getRadicando() || indice != p->getIndice()) {
				total += coeficiente;
				total += "( ";
				total += radicando;
				total += " ^ ";
				total += "1";
				total += "/";
				total += indice;
				total += " )";
				return total;
			}


		}
		string operator-(Real& real){
			Radical* p=static_cast<Radical*> (&real);
			double resta = 0;
			string total;
			if (radicando == p->getRadicando() && indice == p->getIndice())
			{
				resta = coeficiente - p->getCoeficiente();
				total += resta;
				total += "( ";
				total += radicando;
				total += " ^ ";
				total += "1";
				total += "/";
				total += indice;
				total += " )";

				return total;
			} else if (radicando != p->getRadicando() || indice != p->getIndice()) {
				total += coeficiente;
				total += "( ";
				total += radicando;
				total += " ^ ";
				total += "1";
				total += "/";
				total += indice;
				total += " )";

				return total;
			}

		}
		string operator*(Real& real){
			Radical* p = static_cast<Radical*> (&real);
			double multiR, multiI, multiC;
			string total;

			multiR = (radicando * p->getRadicando());
			if (indice == p->getIndice())
			{
				multiI = indice;
			} else if (indice != p->getIndice()) {
				multiI = indice * p->getIndice();
			}
			multiC = coeficiente * p->getCoeficiente();

			total += multiC;
			total += "( ";
			total += multiR;
			total += " ^ ";
			total += "1";
			total += "/";
			total += multiI;
			total += " )";
			return total;
			
		}
		string operator/(Real& real){
			Radical* p = static_cast<Radical*> (&real);
			double multI, multC, multR;
			string total;

			multR = (radicando / p->getRadicando());
			if (indice == p->getIndice())
			{
				multI = indice;
			} else if (indice != p->getIndice()) {
				multI = indice * p->getIndice();
			}
			multC = coeficiente * p->getCoeficiente();

			total += multC;
			total += "( ";
			total += multR;
			total += " ^ ";
			total += "1";
			total += "/";
			total += multI;
			total += " )";
			return total;

		}

};
#endif
