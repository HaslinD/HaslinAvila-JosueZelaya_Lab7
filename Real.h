
#ifndef REAL_H
#define REAL_H

using namespace std;

class Real{
	public:
		Real();
		virtual int operator+(Real*) = 0;
		virtual int operator-(Real*) = 0;
		virtual int operator*(Real*) = 0;
		virtual int operator/(Real*) = 0;
};


#endif
