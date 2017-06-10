#include <string>
#ifndef REAL_H
#define REAL_H

#include <string>

using namespace std;

class Real{
	public:
		Real();
		virtual string operator+(Real&) = 0;
		virtual string operator-(Real&) = 0;
		virtual string operator*(Real&) = 0;
		virtual string operator/(Real&) = 0;
		virtual string getTipo();
		virtual void setTipo(string);

};


#endif
