#include "Real.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef RADICAL_H
#define RADICAL_H
class Radical{
	protected:
		int coeficiente;
		int indice;
		int radicando;
	public:
		Radical(int,int,int);
		Radical();
		int getCoeficiente();
		void setCoeficiente(int);

		int getIndice();
		void setIndice(int);

		int getRadicando();
		void setRadicando(int);

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
