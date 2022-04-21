//
//  main.cpp
//  Class March 6th
//
//  Created by Jesus Llano García on 05/04/22.
//

#include <iostream>
#include "myClass.h"
#include "ClassMethod.h"
#include "Encapsulacion.h"
#include "Inheritance.h"

using namespace std;

#define USING_MAIN1

#ifdef USING_MAIN1
int main() {
    
    myFirstClass myObj(20, "Adios"); // Creamos un objeto de la clase.
    
    /* myObj.Num = 15; // Accedemos y definimos un valor para el atributo.
    myObj.String = "Hola mundo"; */
    
    cout << myObj.Num << "\n";
    cout << myObj.String << "\n";
    
    return 0;
}

#elifdef USING_MAIN2
int main(){
    MetodosInternos obj1;
    obj1.myMethod();
    
    MetodosExternos obj2;
    obj2.myMethod();
    
    return 0;
}

#elifdef USING_MAIN3
int main(){
    
    Empleado Emp1;
    
    Emp1.setSalary(50000);
    
    std::cout << Emp1.getSalary() << "\n";
    
    return 0;
}

#elifdef USING_MAIN4
int main(){
    
    Animales a1;
    
    std::cout << a1.Habla("Woof, MIAU");
    
    Gatito g1("Mittens", 15, "felis catus");
    std::cout << g1.Datos();
    std::cout << g1.Habla("miau");
 
}

#endif
