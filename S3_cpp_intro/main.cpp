// Llamadas a los headders

#include <iostream>
#include "myClass.h" // Incluyo el archivo de headders
#include "classMethod.h"
#include "encapsulacion.h"
#include "herencia.h"

#define USING_MAIN4 // Defino que main usar. Se pueden crear varios métodos main (no ideal)

#ifdef USING_MAIN1 // Si existe main1, usarlo

int main(){
    myFirstClass myObj; // Instancia de la clase (Objeto)

    myFirstClass myObj(10,"Hola Mundo")
    // myObj.Num = 15; // Modifico el valor del num (atributo)
    // myObj.String = "Hola mundo"; // Modifico el valor del atributo string

    std::cout << myObj.Num << "\n"; // Imprimo Num
    std::cout << myObj.String << "\n"; // Imprimo String

    return 0;
}

#elifdef USING_MAIN2 // Defino otro main

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

    std::cout << a1.Habla("Woof");

    Gatito g1("Mittens", 15, "felis catus")
    std::cout << g1.Datos();
    std::cout << g1.Habla("miau");
}
#endif // cierro el if