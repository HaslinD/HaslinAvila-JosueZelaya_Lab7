#include "Real.h"
#include "Radical.h"
#include <string>

#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional : public Real{
	private:
		double denominador;
		double numerador;
		string Tipo;

	public:
		Racional();
		Racional(double, double);
		double getDenominador();
		void setDenominador(double);
		double getNumerador();
		void setNumerador(double);
		string tostring();
		string getTipo();
		void setTipo(string);

		string operator+(Real& real){

			//Racional
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den, num2,num3;
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

			//Radical
			Radical* radi=static_cast<Radical*> (&real);
			num=numerador;
			total+=num;
			total+= " + ";
			num2=(denominador*radi->getCoeficiente());
			total+= num2;
			total+=radi->getRadicando();
			total+= " ^ ";
			total+= radi->getIndice();
			total+= " / ";
			total+= denominador;

			//return total;


		}

		string operator-(Real& real){

			//Resta de FRacciones
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den, num2;
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

			//Radical

			Radical* radi=static_cast<Radical*> (&real);
			num=numerador;
			total+=num;
			total+= " - ";
			num2=(denominador*radi->getCoeficiente());
			total+= num2;
			total+=radi->getRadicando();
			total+= " ^ ";
			total+= radi->getIndice();
			total+= " / ";
			total+= denominador;

			return total;

		}

		string operator*(Real& real){
			//multiplicacion racionales
			Racional* p=static_cast<Racional*> (&real);
			string total;
			double num, den;
			num=(numerador*p->getNumerador());
			den=(denominador*p->getDenominador());
			total+=num;
			total+= " / ";
			total+= den;

			return total;

			//radicales
			//Radical* radi=static_cast<Radical*> (&real);

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
