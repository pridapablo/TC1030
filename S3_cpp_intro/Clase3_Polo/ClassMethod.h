//
//  ClassMethod.h
//  Class March 6th
//
//  Created by Jesus Llano García on 06/04/22.
//

#ifndef ClassMethod_h
#define ClassMethod_h

class MetodosInternos{
    public:
        void myMethod(){
            // Algoritmo que define el comportamiento de este metodo.
            std::cout << "Este metodo esta definido adentro de la clase" << "\n";
        }
    
};

class MetodosExternos{
    public:
        void myMethod();
};

void MetodosExternos::myMethod(){
    std::cout << "Este metodo lo definí afuera de la clase" << "\n";
}

#endif /* ClassMethod_h */
