#include <iostream>
#include "class.h"
#define USING_MAIN

#ifdef USING_MAIN
int main() {
    Envio *vector[5]; // main declara e inicializa un vector que contiene objetos de tipo apuntador a Envio  
    // Se añaden elementos de tipo sobre y paquete al vector:
    vector[0] = new Sobre("Lore", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,40,25);
    vector[1] = new Paquete("Juan", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);
    vector[2] = new Sobre("Pepe", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,40,25);
    vector[3] = new Paquete("Lolo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);
    vector[4] = new Paquete("Momo", "A.A. 32B casa 1", "CDMX", "CDMX", 05200, "Harry", "Wild Oaks 24", "NYC", "NY", 10000,100,100,100,100,100);

    double tot = 0;

    for (int i=0; i < 5; i++){
        Envio *current = vector[i]; // Se itera sobre los objetos dentro del vector  
        std::cout << "-----------------------------\n";
        double curr = current->calculaCosto();
        // CalculaCosto de Sobre regresa el valor esperado  
        // CalculaCosto de Paquete regresa el valor esperado  
        std::cout << "Costo del Envío #" << i+1 << ": $" << curr << "\n\n";
        tot = tot + curr; // main despliega los valores correctos de calculaCosto para Sobre y Paquete
        std::cout << current->getDirDest() << "\n";
        std::cout << current->getDirRem();
        std::cout << "-----------------------------\n";
        }
        
    std::cout << "Costo total de Envios: $" << tot << "\n";
}
#endif

// El código compila
// El código sigue las reglas de programación definidas (nombres de variables, un archivo h y cpp)


