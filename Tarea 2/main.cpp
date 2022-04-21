#include <iostream>
#include "class.h"
#define USING_MAIN

#ifdef USING_MAIN
int main() {
    Envio e1("Pablo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000);
    std::cout << e1.calculaCosto() << std::endl;

    Paquete p1("Pablo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);
    std::cout << p1.calculaCosto() << std::endl;

    Sobre s1("Pablo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,40,25); //ancho, largo
    std::cout << s1.calculaCosto() << std::endl;

    return 0;
}
#endif