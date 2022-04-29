//
//  main.cpp
//  Clase 22 de Abril
//
//  Created by Jesus Llano García on 22/04/22.
//

#include <iostream>
#include "SobrecargaF.h"
#include "SobrecargaOperadores.hpp"

int main() {
    // insert code here...
    TipodeDato t1;
    t1.print(10);
    t1.print(3.1416);
    t1.print("hola");
    
    Promedio p1;
    
    std::cout << p1.calcular(10, 9, 8, 7) << "\n";
    
    CoordRec r1(1,2);
    CoordRec r2(2,4);
    
    int x = r1.getX()+r2.getX();
    int y = r1.getY()+r2.getY();
    
    // ^^^^^ Esto esta mal
    std::cout << "(" << x << "," << y << ")\n";
    
    CoordRec r3 = r1.suma(r2);
    // ^^^Correcto
    std::cout << "(" << r3.getX() << "," << r3.getY() << ")\n";
    
    CoordRec r4 = r1 + r2;
    // ^^^Ideal
    std::cout << "(" << r4.getX() << "," << r4.getY() << ")\n";

    CoordRec r5 = r1 - r2;
    // ^^^Ideal
    std::cout << "r5 resta: (" << r5.getX() << "," << r5.getY() << ")\n";
    
    CoordPol polar1 (7, 20);
    CoordPol polar2 (3, 160);
    
    CoordPol polar3 = polar1 * polar2;
    // ^^^Ideal
    std::cout << "(" << polar3.getR() << "," << polar3.getT() << ")\n";

    CoordPol polar4 = polar1 / polar2;
    // ^^^Ideal
    std::cout << "polar4: (" << polar4.getR() << "," << polar4.getT() << ")\n";

}
