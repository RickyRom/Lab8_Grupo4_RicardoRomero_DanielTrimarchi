#include "Real.h"

	Real::Real(){

	}
	Real::~Real(){

	}
	double Real::getNumero(){
		return numero;
	}
	
	double Real::operator+(Real& rValue){
	//return this->get + rValue.get;
		return this->getNumero() + rValue.getNumero();

	}
	double Real::operator-(Real& rValue){
			//return this->get + rValue.get;
		return this->getNumero() - rValue.getNumero();
	}
	double Real::operator*(Real& rValue){
			//return this->get + rValue.get;
		return this->getNumero() * rValue.getNumero();
	}
	double Real::operator/(Real& rValue){
		//return this->get + rValue.get;
		return this->getNumero() / rValue.getNumero();
	}

	double Real::operator+(double nu){
		return this->getNumero() + nu;

	}
	double Real::operator-(double nu){
		return this->getNumero() - nu;
	}
	double Real::operator*(double nu){
		return this->getNumero() * nu;
	}
	double Real::operator/(double nu){
			return this->getNumero() / nu;
	}
