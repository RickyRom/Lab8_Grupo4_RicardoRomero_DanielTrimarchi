#include "Radical.h"

	Radical::Radical(double pCoef,double pIndice,double pRad){
		coeficiente= pCoef;
		indice=pIndice;
		radicando=pRad;
	}
	Radical::Radical(){

	}
	Radical::~Radical(){

	}
	double Radical::getCoeficiente(){
		return coeficiente;
	}
	void Radical::setCoeficiente(double pCoef){
		coeficiente= pCoef;
	}
	
	double Radical::getIndice(){
		return indice;
	}
	void Radical::setIndice(double pIndice){
		indice=pIndice;
	}

	double Radical::getRadicando(){
		return radicando;
	}
	void Radical::setRadicando(double pRad){
		radicando=pRad;
	}