#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional{
    
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