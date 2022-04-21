#include <iostream>
#include "shapes.h"

int main() {
    Circulo c1(5);
    std::cout << c1.area() << std::endl;
    
    Rectangulo r1(5,12);
    std::cout << r1.area() << std::endl;

    return 0;
}