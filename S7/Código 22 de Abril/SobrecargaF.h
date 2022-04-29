//
//  SobrecargaF.h
//  Clase 22 de Abril
//
//  Created by Jesus Llano García on 22/04/22.
//

#include <string>

#ifndef SobrecargaF_h
#define SobrecargaF_h

class TipodeDato{
public:
    void print(int a){ std::cout << "Este es un numero entero " << a << "\n"; }
    void print(double b) { std::cout << "Este es un numero decimal " << b << "\n";}
    void print(std::string c) { std::cout << "Este es un cadena de caracteres " << c << "\n";}
};

class Promedio{
public:
    double calcular(int, int);
    double calcular(int, int, int);
    double calcular(int, int, int, int);
};

double Promedio::calcular(int a, int b){
    return (a+b)/2;
}

double Promedio::calcular(int a, int b, int c){
    return (a+b+c)/3;
}


double Promedio::calcular(int a, int b, int c, int d){
    return (a+b+c+d)/4;
}
#endif /* SobrecargaF_h */
