#ifndef RADICAL_H
#define RADICAL_H 
class Radical
{
private: 
	double coeficiente,indice,radicando;
public:
	Radical();
	~Radical();
	double getCoeficiente();
	void setCoeficiente(double);
	
	double getIndice();
	void setIndice(doube);

	double getRadicando();
	void setRadicando(double);
	
};
#endif