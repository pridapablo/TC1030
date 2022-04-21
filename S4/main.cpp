#include <iostream>
#include "shapes.h"

int main() {
    Shape f1(1,2);
    std::cout << f1.draw() << " con valor x en: " << f1.getValueX() << " con valor y en: " << f1.getValueY() << std::endl;

    Circle c1(1,2,3); // llamada al mismo método pero desde objeto tipo cículo 
    std::cout << c1.draw() << " con valor x en: " << f1.getValueX() << " con valor y en: " << f1.getValueY() << " y radio " << c1.getValueR() << std::endl; //misma funcionalidad, pero extendida

    Triangle t1(1,2,3,4,"isóseles");
    std::cout << t1.draw() << " con valor x en: " << t1.getValueX() << " con valor y en: " << t1.getValueY() << " base: " << t1.getBase() << " altura: " << t1.getHeight() << " de tipo " << t1.getType() << std::endl;

    Rectangle r1(1,2,3,4);
    std::cout << r1.draw() << " con valor x en: " << t1.getValueX() << " con valor y en: " << t1.getValueY() << " base: " << t1.getBase() << " altura: " << t1.getHeight() << std::endl;
    
    // crear apuntadores y enlazarlos con objetos
    Shape *shapes[5];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle(); //puedo mezclar hijos heredados de la clase shape
    shapes[2] = new Rectangle(1,2,3,4);
    shapes[3] = new Circle(2,3,4);

    // polimorfismo me permite usar una instrucción generalizada para diferentes objetos :)

    for (int i=0; i < 4; i++){
        Shape *current = shapes[i]; // obtengo de los apuntadores cada figura y la guardo en current

        //std::cout << current->draw << std::endl; //llamo al metodo draw de cada uno de los objetos
    }


    return 0;
}