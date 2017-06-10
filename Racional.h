#pragma once

class Radical;

#include "Real.h"
#include <string>

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

		string operator+(Real&);

		string operator-(Real&);

		string operator*(Real&);

		string operator/(Real&);


};