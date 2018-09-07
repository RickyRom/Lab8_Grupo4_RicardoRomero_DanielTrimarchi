#ifndef REAL_H
#define REAL_H

class Real
{
public:
	Real();
	~Real();
	double operator+(Real&);
	double operator-(Real&);
	double operator*(Real&);
	double operator/(Real&);
	
};
#endif