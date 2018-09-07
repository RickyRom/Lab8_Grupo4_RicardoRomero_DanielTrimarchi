#ifndef REAL_H
#define REAL_H
#include <math.h>
class Real
{
protected:
	double numero;
public:
	Real();
	~Real();
	virtual double getNumero();
	virtual double setNumero();
	double operator+(Real&);
	double operator-(Real&);
	double operator*(Real&);
	double operator/(Real&);
	
};
#endif