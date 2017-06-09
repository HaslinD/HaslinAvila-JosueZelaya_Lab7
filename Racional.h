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
		string tostring();

		string operator+(Real& real){
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den;
			if (denominador== p->getDenominador()){
				num=numerador+p->getNumerador();
				total+=num;
				total+=" / ";
				total+=denominador;

				return total;
			}else{
				num=((numerador*p->getDenominador())+(denominador*p->getNumerador()));
				den=(denominador*p->getDenominador());
				total+= num;
				total+= " / ";
				total+= den;

				return total;
			}
		}

		string operator-(Real& real){
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den;
			if (denominador== p->getDenominador()){
				num=numerador-p->getNumerador();
				total+=num;
				total+=" / ";
				total+=denominador;

				return total;
			}else{
				num=((numerador*p->getDenominador())-(denominador*p->getNumerador()));
				den=(denominador*p->getDenominador());
				total+= num;
				total+= " / ";
				total+= den;

				return total;
			}

		}

		string operator*(Real& real){
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den;
			num=(numerador*p->getNumerador());
			den=(denominador*p->getDenominador());
			total+=num;
			total+= " / ";
			total+= den;

			return total;
		}

		string operator/(Real& real){
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den;
			num=(numerador*p->getDenominador());
			den=(denominador*p->getNumerador());

			total+=num;
			total+= " / ";
			total+= den;

			return total;
		}

};

#endif
