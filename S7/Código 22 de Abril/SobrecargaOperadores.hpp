//
//  SobrecargaOperadores.hpp
//  Clase 22 de Abril
//
//  Created by Jesus Llano García on 22/04/22.
//

#ifndef SobrecargaOperadores_hpp
#define SobrecargaOperadores_hpp

#include <stdio.h>

class CoordRec{
    
    double x, y;
    
    public:
        CoordRec(){
            x = 0;
            y = 0;
            }
        CoordRec(double x_, double y_){
            x = x_;
            y = y_;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        CoordRec suma(const CoordRec& otro){
            double x3 = x + otro.x;
            double y3 = y + otro.y;
            
            CoordRec temp(x3, y3);
            
            return temp;
        }
        CoordRec operator+(const CoordRec& otro){
    
            return (*this).suma(otro);
        }
        CoordRec operator-(const CoordRec& otro){
    
            double x3 = this->x - otro.x;
            double y3 = this->y - otro.y; //componenete a compomnente
            
            CoordRec temp(x3, y3);
            
            return temp;
        }
};

class CoordPol{
    
    double r, theta;
    
public:
    CoordPol(){
        r = 0;
        theta = 0;
    }
    CoordPol(double r_, double theta_){
        r = r_;
        theta = theta_;
    }
    CoordPol operator*(const CoordPol& otro){
    
        double r1 = this->r * otro.r;
        double theta1 = this->theta + otro.theta;
        
        CoordPol temp(r1, theta1);
        
        return temp;
        
    }
    CoordPol operator/(const CoordPol& otro){
    
        double r1 = this->r / otro.r;
        double theta1 = this->theta - otro.theta;
        
        CoordPol temp(r1, theta1);
        
        return temp;
        
    }
    double getR(){
        return  r;
    }
    double getT(){
        return  theta;
    }
};



#endif /* SobrecargaOperadores_hpp */
