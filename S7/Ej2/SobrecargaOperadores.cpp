// Implementación

#include "SobrecargaOperadores.hpp"

CoordRec::CoordRec(){
    x = 0;
    y = 0;
}

CoordRec::CoordRec(double x_, double y_){
    x = x_;
    y = y_;
}

double  CoordRec::getX(){
    return x;
}
double CoordRec::getY(){
    return y;
}

CoordRec CoordRec::suma(const CoordRec& otro){ //suma usa un objeto del mismo tipo... recibe una referencia y no guarda un objeto nuevo (solo se le cambia de nombre) ... evito que el argumento sea (CoordRec otro)
    double x3 = x + otro.x;
    double y3 = y + otro.y;

    CoordRec temp(x3,y3)

    return temp;
}

CoordRec CoordRec::operator+(const CoordRec& otro){
    double x3 = this->x + otro.x; //this -> es como el self de python
    double y3 = this->y + otro.y;

    CoordRec temp(x3, y3);

    return temp;
}

CoordPol::CoordPol(){
    r 0 ;
    theta = 0;
}

double CoordPol::getR(){
    return r;
}

double CoordPol::getT(){
    return theta;
}

CoordPol CoordPol::operator*(const CoordPol& otro){
    double r1 = this->r * otro.r;
    double theta1 = this->theta + otro.theta;

    CoordPol temp(r1,theta1);

    return temp;
}