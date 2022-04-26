#include <iostream>
#include "sobrecargaF.h"

int main(){
    TipodeDato t1;
    t1.print(10);
    t1.print(3.1416);
    t1.print("holi");

    Promedio p1;
    std:: cout << p1.calcular(5,2);
}