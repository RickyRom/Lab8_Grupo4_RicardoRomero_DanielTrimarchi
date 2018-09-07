#ifndef RADICAL_H
#define RADICAL_H 

#include "Real.h"
class Radical: public Real
{
private: 
	double coeficiente,indice,radicando;
public:
	Radical();
	Radical(double,double,double);
	~Radical();
	double getCoeficiente();
	void setCoeficiente(double);
	
	double getIndice();
	void setIndice(double);

	double getRadicando();
	void setRadicando(double);
	
};
#endif