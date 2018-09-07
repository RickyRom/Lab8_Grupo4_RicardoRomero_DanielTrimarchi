#include "Racional.h"

Racional::Racional() {

}

Racional::Racional(double pnum, double pden) {
    num = pnum;
    den = pden;
}

Racional::~Racional() {

}

//getters
double Racional::getNum() {
    return num;
}

double Racional::getDen() {
    return den;
}

//setters
void Racional::setNum(double pnum) {
    num = pnum;
}

void Racional::setDen(double pden) {
    den = pden;
}