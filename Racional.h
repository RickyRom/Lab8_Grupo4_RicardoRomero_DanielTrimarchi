#ifndef RACIONAL_H
#define RACIONAL_H

#include "Real.h"

using namespace std;

<<<<<<< HEAD
class Racional{
=======
class Racional:public Real {
>>>>>>> 9ca6084630597cafd8edaff33114c67955c4ec06
    
    private:
        double num;
        double den;

    public:
        Racional();
        Racional(double,double);
        ~Racional();

        //getters
        double getNum();
        double getDen();

        //setters
        void setNum(double);
        void setDen(double);

};
#endif