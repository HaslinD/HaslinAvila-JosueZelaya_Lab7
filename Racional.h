#pragma once

class Radical;

#include "Real.h"
#include <string>

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

		string operator+(Real&, double, double);

		string operator-(Real&, double, double);

		string operator*(Real&, double, double);

		string operator/(Real&, double, double);


};