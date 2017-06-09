#include <string>
#ifndef REAL_H
#define REAL_H

#include <string>

using namespace std;

class Real{
	public:
		Real();
		virtual string operator+(Racional&) = 0;
		virtual string operator-(Racional&) = 0;
		virtual string operator*(Racional&) = 0;
		virtual string operator/(Racional&) = 0;

    virtual string operator+(Radical&) = 0;
		virtual string operator-(Radical&) = 0;
		virtual string operator*(Radical&) = 0;
		virtual string operator/(Radical&) = 0;
};


#endif
