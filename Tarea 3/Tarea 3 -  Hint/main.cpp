//
//  main.cpp
//  Tarea 3
//
//  Created by Jesus Llano García on 27/04/22.
//

#include <iostream>
#include "Shapes.h"

int main() {
        
        Circle *shapes[2];
    
        int x,y,r;
        
        for (int j=0; j<2; j++){
            
            std::cout << "Dame el valor de x para el circulo";
            std::cin >> x;
            
            std::cout << "Dame el valor de y para el circulo";
            std::cin >> y;
            
            std::cout << "Dame el radio del circulo";
            std::cin >> r;
            
            shapes[j] = new Circle(x,y,r);
            
        }
        
        std::cout << shapes[0] -> getValueX() << "\n";
        std::cout << shapes[0] -> getValueY() << "\n";
        std::cout << shapes[0] -> getValueR() << "\n";
        std::cout << shapes[1] -> getValueX() << "\n";
        std::cout << shapes[1] -> getValueY() << "\n";
        std::cout << shapes[1] -> getValueR() << "\n";
    
        return 0;
}
