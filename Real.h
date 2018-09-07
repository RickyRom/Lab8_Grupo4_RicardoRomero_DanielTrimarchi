#ifndef REAL_H
#define REAL_H
#include <math.h>
class Real{
protected:
		double numero;
public:
	Real();
	~Real();
	 double getNumero();
	//virtual double setNumero();
	double operator+(Real&);
	double operator-(Real&);
	double operator*(Real&);
	double operator/(Real&);
		double operator+(double);
	double operator-(double);
	double operator*(double);
	double operator/(double);

};
#endif