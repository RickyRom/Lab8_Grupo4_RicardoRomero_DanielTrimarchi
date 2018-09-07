#include "Radical.h"


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