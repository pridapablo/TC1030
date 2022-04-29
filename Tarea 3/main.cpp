#include <iostream>
#include "class.h"
#define USING_MAIN

#ifdef USING_MAIN
int main() {
    Envio *vector[5]; 
    vector[0] = new Sobre("Lore", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,40,25);
    vector[1] = new Paquete("Juan", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);
    vector[2] = new Sobre("Pepe", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,40,25);
    vector[3] = new Paquete("Lolo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);
    vector[4] = new Paquete("Momo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);

    double tot = 0;

    for (int i=0; i < 5; i++){
        Envio *current = vector[i];  // obtengo de los apuntadores cada figura y la guardo en current
        std::cout << "-----------------------------\n";
        double curr = current->calculaCosto();
        std::cout << "Costo del Envío #" << i+1 << ": $" << curr << "\n\n";
        tot = tot + curr;
        std::cout << current->getDirDest() << "\n";
        std::cout << current->getDirRem();
        std::cout << "-----------------------------\n";
        }
        
    std::cout << "Total de Envios: $" << tot << "\n";
}
#endif



