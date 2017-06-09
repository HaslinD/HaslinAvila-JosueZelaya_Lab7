#include "Real.h"

#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional {
	private:
		int denominador;
		int numerador;

	public:
		Racional();
		Racional(int, int);
		int getDenominador();
		void setDenominador(int);
		int getNumerador();
		void setNumerador(int);

<<<<<<< HEAD
		virtual int suma();
		virtual int resta();
		virtual int multiplicacion();
		virtual int divsion();
=======
		int operator+(Real*){

		}
		int operator-(Real*){

		}
		int operator*(Real*){

		}
		int operator/(Real*){
			
		}

>>>>>>> d844cc17a5519afde612d3e8843add9421163760
};

#endif