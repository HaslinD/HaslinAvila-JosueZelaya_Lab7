#include "Real.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef RADICAL_H
#define RADICAL_H
class Radical{
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

		virtual int operator+(Real&){

		}
		virtual int operator-(Real&){

		}
		virtual int operator*(Real&){

		}
		virtual int operator/(Real&){

		}

};
#endif
